/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 480);
        MainWindow->setStyleSheet(QLatin1String("QMainWindow{border-image: url(:/fm.jpg);}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(330, 0, 161, 51));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 410, 71, 61));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QLatin1String("background-color: rgb(101, 217, 168);\n"
"border:2px groove gray;\n"
"border-radius:30px;\n"
"padding:2px 4px;\n"
""));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(720, 410, 71, 61));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QLatin1String("background-color: rgb(101, 217, 168);\n"
"border:2px groove gray;\n"
"border-radius:30px;\n"
"padding:2px 4px;"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "\345\244\232\345\252\222\344\275\223\346\222\255\346\224\276\345\231\250", 0));
        pushButton->setText(QApplication::translate("MainWindow", "\350\247\206\351\242\221", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "\351\237\263\344\271\220", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
