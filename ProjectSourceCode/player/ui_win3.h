/********************************************************************************
** Form generated from reading UI file 'win3.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIN3_H
#define UI_WIN3_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_win3
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QListWidget *listWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QSlider *horizontalSlider;
    QPushButton *pushButton_10;

    void setupUi(QMainWindow *win3)
    {
        if (win3->objectName().isEmpty())
            win3->setObjectName(QStringLiteral("win3"));
        win3->resize(800, 480);
        QFont font;
        font.setPointSize(11);
        win3->setFont(font);
        win3->setStyleSheet(QStringLiteral("background-color: rgb(41, 0, 0);"));
        centralwidget = new QWidget(win3);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 290, 521, 71));
        QFont font1;
        font1.setPointSize(15);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("color: rgb(114, 159, 207);"));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(610, 50, 191, 351));
        listWidget->setStyleSheet(QStringLiteral("color: rgb(238, 238, 236);"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(680, 430, 111, 41));
        QFont font2;
        font2.setPointSize(10);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QLatin1String("color: rgb(238, 238, 236);\n"
"border:2px groove gray;\n"
"border-radius:7px;\n"
"padding:2px 4px;"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(80, 420, 51, 41));
        QFont font3;
        font3.setPointSize(8);
        pushButton_2->setFont(font3);
        pushButton_2->setStyleSheet(QLatin1String("color: rgb(238, 238, 236);\n"
"border:2px groove gray;\n"
"border-radius:20px;\n"
"padding:2px 4px;"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(150, 420, 51, 41));
        pushButton_3->setFont(font3);
        pushButton_3->setStyleSheet(QLatin1String("color: rgb(238, 238, 236);\n"
"border:2px groove gray;\n"
"border-radius:20px;\n"
"padding:2px 4px;"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(220, 420, 51, 41));
        pushButton_4->setFont(font3);
        pushButton_4->setStyleSheet(QLatin1String("color: rgb(238, 238, 236);\n"
"border:2px groove gray;\n"
"border-radius:20px;\n"
"padding:2px 4px;"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(280, 400, 71, 71));
        pushButton_5->setStyleSheet(QLatin1String("color: rgb(238, 238, 236);\n"
"border:2px groove gray;\n"
"border-radius:28px;\n"
"padding:2px 4px;"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(370, 420, 51, 41));
        pushButton_6->setFont(font3);
        pushButton_6->setStyleSheet(QLatin1String("color: rgb(238, 238, 236);\n"
"border:2px groove gray;\n"
"border-radius:20px;\n"
"padding:2px 4px;"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(440, 420, 51, 41));
        pushButton_7->setFont(font3);
        pushButton_7->setStyleSheet(QLatin1String("color: rgb(238, 238, 236);\n"
"border:2px groove gray;\n"
"border-radius:20px;\n"
"padding:2px 4px;"));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(0, 430, 61, 41));
        pushButton_8->setStyleSheet(QLatin1String("color: rgb(238, 238, 236);\n"
"border-image: url(:/r1.jpg);\n"
"border:2px groove gray;\n"
"border-radius:7px;\n"
"padding:2px 4px;"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 240, 531, 31));
        label_2->setStyleSheet(QLatin1String("\n"
"color: rgb(238, 238, 236);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(610, 10, 181, 21));
        label_3->setStyleSheet(QStringLiteral("color: rgb(238, 238, 236);"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 0, 400, 225));
        label_4->setStyleSheet(QStringLiteral("background-color: rgb(41, 0, 0);"));
        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(10, 370, 531, 16));
        horizontalSlider->setStyleSheet(QStringLiteral(""));
        horizontalSlider->setOrientation(Qt::Horizontal);
        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(570, 430, 91, 41));
        pushButton_10->setFont(font3);
        pushButton_10->setStyleSheet(QLatin1String("border:2px groove gray;\n"
"color: rgb(238, 238, 236);\n"
"border-radius:10px;\n"
"padding:2px 4px;"));
        win3->setCentralWidget(centralwidget);

        retranslateUi(win3);

        QMetaObject::connectSlotsByName(win3);
    } // setupUi

    void retranslateUi(QMainWindow *win3)
    {
        win3->setWindowTitle(QApplication::translate("win3", "MainWindow", 0));
        label->setText(QApplication::translate("win3", " \345\215\225\345\207\273\351\237\263\344\271\220\345\220\215\347\247\260\345\217\257\346\222\255\346\224\276\351\237\263\344\271\220", 0));
        pushButton->setText(QApplication::translate("win3", "\346\267\273\345\212\240\351\237\263\344\271\220", 0));
        pushButton_2->setText(QApplication::translate("win3", "\345\277\253\350\277\233 ", 0));
        pushButton_3->setText(QApplication::translate("win3", "\345\277\253\351\200\200", 0));
        pushButton_4->setText(QApplication::translate("win3", "\346\232\202\345\201\234", 0));
        pushButton_5->setText(QApplication::translate("win3", "\346\222\255\346\224\276", 0));
        pushButton_6->setText(QApplication::translate("win3", "\351\237\263\351\207\217+", 0));
        pushButton_7->setText(QApplication::translate("win3", "\351\237\263\351\207\217-", 0));
        pushButton_8->setText(QString());
        label_2->setText(QApplication::translate("win3", "\346\255\214\350\257\215\345\244\247\346\204\217 \357\274\232(\346\217\220\347\244\272\357\274\232\345\217\257\350\207\252\345\212\250\350\267\263\350\275\254\345\210\260\344\270\213\351\246\226\344\270\200\351\237\263\344\271\220)", 0));
        label_3->setText(QApplication::translate("win3", "\351\237\263\344\271\220\345\210\227\350\241\250\357\274\232", 0));
        label_4->setText(QApplication::translate("win3", "TextLabel", 0));
        pushButton_10->setText(QApplication::translate("win3", "ON/OFF\345\210\227\350\241\250", 0));
    } // retranslateUi

};

namespace Ui {
    class win3: public Ui_win3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIN3_H
