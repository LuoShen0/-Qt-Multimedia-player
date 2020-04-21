/********************************************************************************
** Form generated from reading UI file 'win2.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIN2_H
#define UI_WIN2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_win2
{
public:
    QWidget *centralwidget;
    QListWidget *listWidget;
    QPushButton *pushButton;
    QLabel *label_2;
    QProgressBar *progressBar;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QLabel *label;
    QLabel *label_3;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;

    void setupUi(QMainWindow *win2)
    {
        if (win2->objectName().isEmpty())
            win2->setObjectName(QStringLiteral("win2"));
        win2->resize(800, 480);
        win2->setStyleSheet(QStringLiteral("background-color: rgb(101, 217, 168);"));
        centralwidget = new QWidget(win2);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(605, 40, 201, 391));
        listWidget->setStyleSheet(QStringLiteral("color: rgb(46, 52, 54);"));
        listWidget->setIconSize(QSize(35, 35));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(700, 440, 91, 41));
        QFont font;
        font.setPointSize(10);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QLatin1String("border:2px groove gray;\n"
"border-radius:10px;\n"
"padding:2px 4px;"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 600, 371));
        label_2->setStyleSheet(QStringLiteral(""));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(10, 390, 561, 20));
        progressBar->setStyleSheet(QStringLiteral(""));
        progressBar->setValue(0);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 430, 41, 31));
        QFont font1;
        font1.setPointSize(8);
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QLatin1String("border:2px groove gray;\n"
"border-radius:15px;\n"
"padding:2px 4px;"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(160, 430, 41, 31));
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QLatin1String("border:2px groove gray;\n"
"border-radius:15px;\n"
"padding:2px 4px;"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(220, 430, 41, 31));
        pushButton_4->setFont(font1);
        pushButton_4->setStyleSheet(QLatin1String("border:2px groove gray;\n"
"border-radius:15px;\n"
"padding:2px 4px;"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(280, 420, 61, 61));
        pushButton_5->setStyleSheet(QLatin1String("border:2px groove gray;\n"
"border-radius:20px;\n"
"padding:2px 4px;"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(360, 430, 51, 31));
        pushButton_6->setFont(font1);
        pushButton_6->setStyleSheet(QLatin1String("border:2px groove gray;\n"
"border-radius:15px;\n"
"padding:2px 4px;"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(430, 430, 51, 31));
        pushButton_7->setFont(font1);
        pushButton_7->setStyleSheet(QLatin1String("border:2px groove gray;\n"
"border-radius:15px;\n"
"padding:2px 4px;"));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(10, 434, 61, 41));
        pushButton_8->setStyleSheet(QLatin1String("border:2px groove gray;\n"
"border-image: url(:/r.jpg);\n"
"border-radius:8px;\n"
"padding:2px 4px;\n"
""));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(600, 10, 181, 21));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 10, 101, 21));
        label_3->setStyleSheet(QStringLiteral("color: rgb(237, 212, 0);"));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(500, 430, 51, 31));
        pushButton_9->setFont(font1);
        pushButton_9->setStyleSheet(QLatin1String("border:2px groove gray;\n"
"border-radius:15px;\n"
"padding:2px 4px;"));
        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(580, 440, 101, 41));
        pushButton_10->setFont(font1);
        pushButton_10->setStyleSheet(QLatin1String("border:2px groove gray;\n"
"border-radius:10px;\n"
"padding:2px 4px;"));
        win2->setCentralWidget(centralwidget);

        retranslateUi(win2);

        QMetaObject::connectSlotsByName(win2);
    } // setupUi

    void retranslateUi(QMainWindow *win2)
    {
        win2->setWindowTitle(QApplication::translate("win2", "MainWindow", 0));
        pushButton->setText(QApplication::translate("win2", "\346\267\273\345\212\240\350\247\206\351\242\221", 0));
        label_2->setText(QApplication::translate("win2", " \346\217\220\347\244\272\357\274\232\345\217\214\345\207\273\350\247\206\351\242\221\345\220\215\347\247\260\346\222\255\346\224\276\350\247\206\351\242\221(\345\217\214\345\207\273\345\217\257\344\273\245\351\200\200\345\207\272\345\205\250\345\261\217;\345\217\257\350\207\252\345\212\250\350\267\263\350\275\254\345\210\260\344\270\213\344\270\200\344\270\252\350\247\206\351\242\221)", 0));
        pushButton_2->setText(QApplication::translate("win2", "\345\277\253\350\277\233", 0));
        pushButton_3->setText(QApplication::translate("win2", "\345\277\253\351\200\200", 0));
        pushButton_4->setText(QApplication::translate("win2", "\346\232\202\345\201\234", 0));
        pushButton_5->setText(QApplication::translate("win2", "\346\222\255\346\224\276", 0));
        pushButton_6->setText(QApplication::translate("win2", "\351\237\263\351\207\217+", 0));
        pushButton_7->setText(QApplication::translate("win2", "\351\237\263\351\207\217-", 0));
        pushButton_8->setText(QString());
        label->setText(QApplication::translate("win2", "\350\247\206\351\242\221\345\210\227\350\241\250\357\274\232", 0));
        label_3->setText(QString());
        pushButton_9->setText(QApplication::translate("win2", "\345\205\250\345\261\217", 0));
        pushButton_10->setText(QApplication::translate("win2", "ON/OFF\345\210\227\350\241\250", 0));
    } // retranslateUi

};

namespace Ui {
    class win2: public Ui_win2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIN2_H
