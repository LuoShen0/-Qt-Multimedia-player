#ifndef QUANPIN_H
#define QUANPIN_H

#include <QMainWindow>


#include <QProcess>
#include "QTimer"

//添加总事件
#include <QEvent>

//添加鼠标事件
#include <QMouseEvent>

namespace Ui {
class quanpin;
}

class quanpin : public QMainWindow
{
    Q_OBJECT

public:
    explicit quanpin(QWidget *parent = nullptr);
    ~quanpin();

    //重写鼠标双击事件
    void mouseDoubleClickEvent(QMouseEvent *event);

    void get_addr(int,QString);  //获取该窗的父窗传过来的进度和视频路径

private slots:

    void read_rec();   //读取所有播放器返回的数据
    void Progress3();  //向播放器发送百分比请求


signals:
    void sendData(QString);    //向父窗发送全屏窗视频播放进度

private:
    Ui::quanpin *ui;

    QProcess *play3; //播放器进程
    QTimer *t;  //定时器
};

#endif // QUANPIN_H
