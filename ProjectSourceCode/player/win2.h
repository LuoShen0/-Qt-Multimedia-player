#ifndef WIN2_H
#define WIN2_H

#include <QMainWindow>
#include <QProcess>
#include <QListWidgetItem>
#include "QTimer"

namespace Ui {
class win2;
}

class win2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit win2(QWidget *parent = nullptr);
    ~win2();

private slots:
    void on_pushButton_clicked();

    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

    void read_time();     //读取所有播放器返回的数据
    void Progress1();     //向播放器发送请求百分比命令
    void quanpin_black(); //从全屏回来继续播放
    void get_quanpin_data(QString);   //接收全屏传递过来的数据

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

private:
    Ui::win2 *ui;

    QTimer *m_t; //定时器1
    QTimer *m_t2;  //定时器2

    QProcess *play; //播放器进程

};

#endif // WIN2_H
