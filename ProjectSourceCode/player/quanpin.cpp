#include "quanpin.h"
#include "ui_quanpin.h"
#include "qdebug.h"
#include "QTimer"


QString get_data;   //从播放器读到的总数据
QString get_data1;  //切割总数据
QString get_data3;  //再次切割数据

quanpin::quanpin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::quanpin)
{
    ui->setupUi(this);

    play3 = new QProcess(this);   //创建一个进程来给mplayer运行

    //关联进程可读信号
    connect(play3,SIGNAL(readyRead()),this,SLOT(read_rec()));

    t  = new  QTimer(this);
    connect(t,SIGNAL(timeout()),this,SLOT(Progress3()));

    t->start(1000);  //开启定时器

}

quanpin::~quanpin()
{
    delete ui;
}

void quanpin::mouseDoubleClickEvent(QMouseEvent *event)  //双击事件退出全屏
{
    //先关联再发送
    connect(this, SIGNAL(sendData(QString)), this->parentWidget(), SLOT(get_quanpin_data(QString)));

    emit sendData(get_data3);

    play3->kill();
    play3->waitForFinished();
    qDebug() <<"进程已关闭，资源已回收"<< endl;

    this->parentWidget()->show();
    this->close();
}

void quanpin::get_addr(int data,QString path)   //获取该窗的父窗传过来的进度和视频路径
{
    QString tmp1 = QString("mplayer  -slave  -quiet     -zoom    -x 800  -y  480  %1").arg(path);

    play3->start(tmp1);     //播放视频

    QString tmp2 =QString("seek %1 1 \n").arg(data);
    play3->write(tmp2.toUtf8().data());   //给播放器发送上一次的进度
}

void quanpin::read_rec() //读取所有播放器返回的数据
{
    get_data =  play3->readAll();

    get_data1 = get_data.remove(0,get_data.lastIndexOf("=")+1);
    get_data3= get_data1.remove("\n");
}

void quanpin::Progress3()   //发送获取百分比命令
{
    play3->write("get_percent_pos \n");
}

