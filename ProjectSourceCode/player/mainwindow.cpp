#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "win2.h"
#include "win3.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()   //进入视频播放界面
{

    this->hide();    //父界面隐藏
    win2 *a = new win2(this);   //创建一个子界面,并且把当前窗地址传给子窗
    a->setGeometry(this->geometry());   //geometry()是获取父界面的位置信息(比如窗口的x,y位置,还有长宽等信息
    a->show();

}

void MainWindow::on_pushButton_2_clicked() //进入音乐播放界面
{
    this->hide();    //父界面隐藏
    win3 *b = new win3(this);   //创建一个子界面,并且把当前窗地址传给子窗
    b->setGeometry(this->geometry());   //geometry()是获取父界面的位置信息(比如窗口的x,y位置,还有长宽等信息
    b->show();
}
