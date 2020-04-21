#ifndef WIN3_H
#define WIN3_H

#include <QMainWindow>
#include<QListWidgetItem>
#include <QProcess>
#include "QTimer"

namespace Ui {
class win3;
}

class win3 : public QMainWindow
{
    Q_OBJECT

public:
    explicit win3(QWidget *parent = nullptr);
    ~win3();

private slots:
    void on_pushButton_clicked();

    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void read_time1();   //读取音乐文件时间轴



    void Progress2();  //音乐文件时间与对歌词文件时间对比,显示相应歌词


    void on_horizontalSlider_actionTriggered(int action);

    void on_pushButton_10_clicked();

private:
    Ui::win3 *ui;


    QProcess *play1;  //播放器进程

    QTimer *m_t1;    //定时器
    QString msgg;    //从播放器读到的总数据

};

#endif // WIN3_H
