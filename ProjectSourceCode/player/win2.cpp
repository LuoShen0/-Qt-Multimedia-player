#include "win2.h"
#include "ui_win2.h"
#include "qdebug.h"
#include "QTimer"
#include <unistd.h>
#include "quanpin.h"

#include <QFileDialog>
#include <QListWidget>
#include <QListWidgetItem>
#include <QProcess>

#define  pic1 "/play/chen.jpg"
#define  pic2 "/play/hu.jpg"
#define  pic3 "/play/yuanqi.jpg"


QStringList files;   //存放所有视频文件的路径
int line;           //列表行号
QString msg;       //读到的总数据
int allsize;      //视频总长度
QString tmp;
QString path1;        //单个视频文件的路径
QString path2;        //临时变量
QString jindu_data;   //全屏时的视频进度
QString jindu1;
bool flag=true;     //按键打开关闭列表
int tmp_line=0;    //自动跳转下一个视频

win2::win2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::win2)
{
    ui->setupUi(this);

    play  = new QProcess(this);

    //关联进程可读信号
    connect(play,SIGNAL(readyRead()),this,SLOT(read_time()));

    m_t  = new  QTimer(this);
    connect(m_t,SIGNAL(timeout()),this,SLOT(Progress1()));

    m_t->start(1000);//开启定时器

    m_t2  = new  QTimer(this);
    connect(m_t2,SIGNAL(timeout()),this,SLOT(quanpin_black()));

    m_t2->start(1000); //开启定时器

}

win2::~win2()
{
    delete ui;
}

void win2::on_pushButton_clicked() //添加视频文件以及设置缩略图
{

    files = QFileDialog::getOpenFileNames(this,"查找文件","/home","Images(*)");
    for(int i=0;i<files.size();i++)
    {
         path1 = files.at(i);
         path2 = path1;

         if(files.at(i).indexOf("hu") >=0)
         {
             QIcon ic(pic2);

             QListWidgetItem *it = new QListWidgetItem(ic,path2.remove(0,path2.lastIndexOf("/")+1));

             ui->listWidget->addItem(it);     //加到框里
         }
         else if (files.at(i).indexOf("yuan") >=0)
         {
             QIcon ic(pic3);

             QListWidgetItem *it = new QListWidgetItem(ic,path2.remove(0,path2.lastIndexOf("/")+1));

             ui->listWidget->addItem(it);     //加到框里
         }
         else
         {
             QIcon ic(pic1);

             QListWidgetItem *it = new QListWidgetItem(ic,path2.remove(0,path2.lastIndexOf("/")+1));

             ui->listWidget->addItem(it);     //加到框里
         }
    }
}

void win2::on_listWidget_itemDoubleClicked(QListWidgetItem *item)  //双击打开视频并且发送获取视频总长度命令
{
    if(play->state()== QProcess::Running)
    {
        play->kill();
        play->waitForFinished();

        line = ui->listWidget->currentRow();  //获取双击的文件的行号
        tmp_line = line;

        QString tmp = files.at(line);
        QString tmp1 = " ";

       //开启播放器 /home/eva/shared/player/playerMV/chen.mp4
        play->start("mplayer  -slave  -quiet     -zoom    -x 600  -y  370  " +tmp1 +tmp);
        play->write("get_time_length \n");

    }
    else
    {
        line = ui->listWidget->currentRow();  //获取双击的文件的行号
        tmp_line = line;

        QString tmp = files.at(line);
        QString tmp1 = " ";

       //开启播放器 /home/eva/shared/player/playerMV/chen.mp4
        play->start("mplayer  -slave  -quiet     -zoom    -x 600  -y  370  " +tmp1 +tmp);
        play->write("get_time_length \n");

    }

}

void win2::read_time()   //读取所有播放器返回的数据 并且设置进度条
{  
   msg =  play->readAll();
   if(msg.indexOf("LENGTH")>=0)  //获取总长度
   {
       allsize = msg.remove(0,msg.lastIndexOf("=")+1).remove("\n").toInt();
   }
   if(msg.indexOf("End") >= 0)  //自动跳转到下一个视频
   {
       tmp_line++;

      if(tmp_line == (files.size()))
      {
          play->kill();
          play->waitForFinished();
          tmp_line =0;
          ui->label_2->setText("列表视频播放完毕，请双击选择后重新播放！");
      }
      else
      {
          play->kill();
          play->waitForFinished();
          QString tmp = files.at(tmp_line);
          QString tmp1 = " ";

         //开启播放器 /home/eva/shared/player/playerMV/chen.mp4
          play->start("mplayer  -slave  -quiet     -zoom    -x 600  -y  370  " +tmp1 +tmp);

      }

   }

   tmp = msg.remove(0,msg.lastIndexOf("=")+1);
   jindu1 = tmp.remove("\n");

   //设置进度条的最大值
   ui->progressBar->setMaximum(100);

   //设置进度条的当前值
   ui->progressBar->setValue(jindu1.toDouble());
}

void win2::Progress1()    //向播放器发送请求百分比命令
{
    play->write("get_percent_pos \n");
}

void win2::quanpin_black()   //从全屏回来继续播放
{
    if(jindu_data != nullptr)
    {
       m_t->start(1000);
       play->write("pause \n");

       QString tmp2 =QString("seek %1 1 \n").arg(jindu_data);
       play->write(tmp2.toUtf8().data());   //发送全屏时的进度
       jindu_data = nullptr;
    }
}

void win2::get_quanpin_data(QString send_data)  //获取全屏发过来的进度
{
   jindu_data = send_data;
}

void win2::on_pushButton_2_clicked()  //快进5秒
{
    play->write("seek +5\n");

}

void win2::on_pushButton_3_clicked()    //快退5秒
{
    play->write("seek -5\n");
}

void win2::on_pushButton_4_clicked()    // 暂停
{
    m_t->stop();
    play->write("pause\n");

}

void win2::on_pushButton_5_clicked()     // 播放
{
    m_t->start(1000);
    play->write("pause\n");

}

void win2::on_pushButton_6_clicked()    //音量+
{
    play->write("volume +10\n");
}

void win2::on_pushButton_7_clicked()   // 音量-
{
    play->write("volume -10\n");
}

void win2::on_pushButton_8_clicked()  //返回主菜单
{
    play->kill();                 //杀死进程
    play->waitForFinished();     //回收进程资源
    qDebug() <<"进程已关闭,资源已回收"<< endl;

    this->parentWidget()->show();
    this->close();
}

void win2::on_pushButton_9_clicked()  //进入全屏
{
    int sizenow =ui->progressBar->value();   //当前播放进度

    quanpin *c = new quanpin(this);          //创建一个子界面,并且把当前窗地址传给子窗
    play->write("pause \n");                 //暂停当前进程
    m_t->stop();                             //暂停定时器

    c->setGeometry(this->geometry());   //geometry()是获取父界面的位置信息(比如窗口的x,y位置,还有长宽等信息
    c->show();

    c->get_addr(sizenow,files.at(line));    //传当前进度和播放的视频的路径给全屏窗
    this->hide();    //父界面隐藏
}

void win2::on_pushButton_10_clicked()  //按钮隐藏文件列表
{
    if(flag == true)
    {
        ui->listWidget->hide();
        flag=false;
    }
    else
    {
        ui->listWidget->show();
        flag=true;
    }

}
