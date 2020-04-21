#include "win3.h"
#include "ui_win3.h"
#include "qdebug.h"
#include "QTimer"
#include <unistd.h>
#include"iostream"

#include <QFileDialog>
#include <QListWidget>
#include<QListWidgetItem>
#include <QProcess>
#include <qfile.h>
#include <QMovie>
#include <QDir>

#define  pic1 "/play/logo.ico"
#define  lrc_path  "/music/lrc"
#define  lrc_path_name  "/music/lrc/"

QStringList files1;   //音乐文件的路径
int line1;            //列表行号
QString timenow;      //歌词时间轴
QStringList geci_lrc;  //存放歌词文件
QStringList lrc;      //歌词行
QMovie *movie;        //声明一个播放器来打开动图
QString msgg1;        //临时变量
QString msgg3;        //临时变量
float max_size;      //播放总时长
float read_bar=0;     //进度条当前值
bool flag1=true;     //按键打开关闭列表
int tmp_line1=0;    //自动跳转下一个视频

win3::win3(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::win3)
{
    ui->setupUi(this);

    ui->horizontalSlider->setMaximum(100);    //设置进度条最大值100

    ui->label->setScaledContents(true);
           movie = new QMovie("/play/3.gif"); //新建一个播放器，传入动图的路径
           ui->label_4->setMovie(movie);
           //movie->start();

       QStringList type_lrc;
       type_lrc.append("*.lrc");

       QDir dir(lrc_path);
       foreach (QString file, dir.entryList(type_lrc, QDir::Files)) //搜索指定目录符合条件的文件添加到列表
       {
           geci_lrc.append(file);
       }

       play1  = new QProcess(this);

       //关联进程可读信号
       connect(play1,SIGNAL(readyRead()),this,SLOT(read_time1()));

       m_t1  = new  QTimer(this);
       connect(m_t1,SIGNAL(timeout()),this,SLOT(Progress2()));

       m_t1->start(1000);//开启定时器
}

win3::~win3()
{
    delete ui;
}

void win3::on_pushButton_clicked()  //添加音乐文件并且显示图标
{
    files1 = QFileDialog::getOpenFileNames(this,"查找文件","/home","Images(*)");
    for(int i=0;i<files1.size();i++)
    {
         QString tmp = files1.at(i);

         QIcon ic(pic1);

         QListWidgetItem *it = new QListWidgetItem(ic,tmp.remove(0,tmp.lastIndexOf("/")+1));

         ui->listWidget->addItem(it);     //加到框里
    }
}

void win3::on_listWidget_itemClicked(QListWidgetItem *item)  //播放音乐、同步显示歌词以及发送获取总时长命令
{

    if(play1->state()== QProcess::Running)
    {
        lrc.clear();
        qDebug()<<"6666666:"<<lrc.size()<<endl;
        play1->kill();
        play1->waitForFinished();

        line1 = ui->listWidget->currentRow();  //获取单击的文件的行号
         tmp_line1 =line1;

        QString tmp = files1.at(line1);
        QString tmp1 = " ";

        //开启播放器
        play1->start("mplayer  -slave  -quiet     -zoom    -x 600  -y  400  " +tmp1 +tmp);
        ui->label->setText("音乐正在播放......");

        play1->write("get_time_length \n");
        movie->start();   //播放音乐时打开动图

        for(int i=0;i<geci_lrc.size();i++)  //查找该歌曲有没有对应的歌词文件
        {

            QString name_lrc = geci_lrc.at(i);    //没有去掉歌词文件的后缀

            name_lrc.remove(".lrc");              //去掉后缀

            if(tmp.remove(0,tmp.lastIndexOf("/")+1).indexOf(name_lrc) >= 0)   //如果有就读取歌词文件
            {
                  //打开指定文件夹读取该歌词文件中的内容
                  QFile file(lrc_path_name + geci_lrc.at(i));

                  if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
                      return;

                   while (!file.atEnd())
                   {
                         QString line = file.readLine();

                         //形成歌词列表
                         lrc.append(line);
                   }
            }
        }
    }

    else
    {
        line1 = ui->listWidget->currentRow();  //获取单击的文件的行号
        tmp_line1 =line1;

        QString tmp = files1.at(line1);
        QString tmp1 = " ";

        //开启播放器
        play1->start("mplayer  -slave  -quiet     -zoom    -x 600  -y  400  " +tmp1 +tmp);
        ui->label->setText("音乐正在播放......");

        play1->write("get_time_length \n");
        movie->start();   //播放音乐时打开动图

        for(int i=0;i<geci_lrc.size();i++)  //查找该歌曲有没有对应的歌词文件
        {

            QString name_lrc = geci_lrc.at(i);    //没有去掉歌词文件的后缀

            name_lrc.remove(".lrc");              //去掉后缀

            if(tmp.remove(0,tmp.lastIndexOf("/")+1).indexOf(name_lrc) >= 0)   //如果有就读取歌词文件
            {
                  //打开指定文件夹读取该歌词文件中的内容
                  QFile file(lrc_path_name + geci_lrc.at(i));

                  if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
                      return;

                   while (!file.atEnd())
                   {
                         QString line = file.readLine();

                         //形成歌词列表
                         lrc.append(line);
                   }
            }
        }

    }
}

void win3::on_pushButton_6_clicked()    //音量+
{
     play1->write("volume +10\n");
}

void win3::on_pushButton_7_clicked()    //音量-
{
    play1->write("volume -10\n");
}

void win3::on_pushButton_2_clicked()    //快进5秒
{
    play1->write("seek +5\n");

}

void win3::on_pushButton_3_clicked()    //快退5秒
{
     play1->write("seek -5\n");
}

void win3::on_pushButton_4_clicked()    // 暂停
{
    m_t1->stop();
    movie->stop();
    play1->write("pause\n");
}

void win3::on_pushButton_5_clicked()    // 播放
{
    m_t1->start(1000);
    movie->start();
    play1->write("pause\n");
}

void win3::on_pushButton_8_clicked()    //返回主菜单
{
    play1->kill();              //杀死进程
    play1->waitForFinished();   //回收进程资源
    qDebug() <<"进程已关闭，资源已回收"<< endl;

    this->parentWidget()->show();
    this->close();
}

void win3::on_pushButton_9_clicked()    //该按键已废弃
{

}

void win3::read_time1()  //读取音乐文件时间轴、设置进度条
{
    int fen=0;   //分
    int miao=0;   //秒

   msgg = play1->readAll();

   if(msgg.indexOf("End")>=0) //播放完就暂停动图
   {

       lrc.clear();
       qDebug()<<"-----------7:"<<lrc.size()<<endl;

        movie->stop();
        tmp_line1++;

       if(tmp_line1 == (files1.size()))   //自动跳转下一个视频
       {
           play1->kill();
           play1->waitForFinished();
           tmp_line1 =0;
           ui->label->setText("列表音乐播放完毕，请单击选择后重新播放！");
       }
       else
       {
           play1->kill();
           play1->waitForFinished();
           QString tmp = files1.at(tmp_line1);
           QString tmp1 = " ";

          //开启播放器 /home/eva/shared/player/playerMV/chen.mp4
           play1->start("mplayer  -slave  -quiet     -zoom    -x 600  -y  370  " +tmp1 +tmp);
           movie->start();


           for(int i=0;i<geci_lrc.size();i++)  //查找该歌曲有没有对应的歌词文件
           {

               QString name_lrc = geci_lrc.at(i);    //没有去掉歌词文件的后缀

               name_lrc.remove(".lrc");              //去掉后缀

               if(tmp.remove(0,tmp.lastIndexOf("/")+1).indexOf(name_lrc) >= 0)   //如果有就读取歌词文件
               {
                     //打开指定文件夹读取该歌词文件中的内容
                     QFile file(lrc_path_name + geci_lrc.at(i));

                     if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
                         return;

                      while (!file.atEnd())
                      {
                            QString line = file.readLine();

                            //形成歌词列表
                            lrc.append(line);
                      }
               }
           }

       }
   }

   if(msgg.indexOf("LENGTH")>=0)  //从总数据里获取总时间
   {
       max_size = msgg.remove(0,msgg.lastIndexOf("=")+1).remove("\n").toFloat();

   }

   msgg1 = msgg;

   if(msgg.indexOf("TIME_POSITION")>=0)  //从总数据里获取当前播放时间
   {
       QString time_fist = msgg;
       QString time_fist1  = time_fist.remove(0,time_fist.lastIndexOf("=")+1);
       QString time_fist2= time_fist.remove("\n");

       read_bar = ((time_fist2.toDouble()*100)/max_size);

       ui->horizontalSlider->setValue(read_bar);     //设置进度条

       QString shijian = msgg.remove(0,msgg.lastIndexOf("=")+1).remove("\n");

       for(;shijian.toDouble()>=60;)
       {
           fen++;

           shijian =  QString::number(shijian.toDouble()-60);
       }
       miao=shijian.toFloat();

       if(fen<=10 && miao<10  )
       {
           timenow = QString("[0%1:0%2").arg(fen).arg(miao);
       }
       else if (fen<10 && miao>=10)
       {
           timenow = QString("[0%1:%2").arg(fen).arg(miao);
           qDebug()<<"shijian:"<<timenow<<endl;
       }
   }
}

void win3::Progress2()  //音乐文件时间与对歌词文件时间对比,显示相应歌词
{
     play1->write("get_time_pos \n");

     for(int i=0;i<lrc.size();i++)
     {
         if(lrc.at(i).indexOf(timenow)>=0)
         {
             QString xianshi = lrc.at(i);
             xianshi.remove(0,xianshi.lastIndexOf("]")+1);

             ui->label->setText(xianshi);   
         }
     }

}

void win3::on_horizontalSlider_actionTriggered(int action) //该函数已废弃
{

}

void win3::on_pushButton_10_clicked()   //按钮隐藏文件列表
{
    if(flag1 == true)
    {
        ui->listWidget->hide();
        flag1=false;
    }
    else
    {
        ui->listWidget->show();
        flag1=true;
    }
}
