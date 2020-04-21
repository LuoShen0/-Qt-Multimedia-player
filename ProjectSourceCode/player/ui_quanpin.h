/********************************************************************************
** Form generated from reading UI file 'quanpin.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUANPIN_H
#define UI_QUANPIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_quanpin
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *quanpin)
    {
        if (quanpin->objectName().isEmpty())
            quanpin->setObjectName(QStringLiteral("quanpin"));
        quanpin->resize(800, 600);
        menubar = new QMenuBar(quanpin);
        menubar->setObjectName(QStringLiteral("menubar"));
        quanpin->setMenuBar(menubar);
        centralwidget = new QWidget(quanpin);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        quanpin->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(quanpin);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        quanpin->setStatusBar(statusbar);

        retranslateUi(quanpin);

        QMetaObject::connectSlotsByName(quanpin);
    } // setupUi

    void retranslateUi(QMainWindow *quanpin)
    {
        quanpin->setWindowTitle(QApplication::translate("quanpin", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class quanpin: public Ui_quanpin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUANPIN_H
