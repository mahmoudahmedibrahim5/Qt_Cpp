/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.16
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButtonName;
    QPushButton *pushButtonAge;
    QLabel *labelDisplay;
    QPushButton *pushButtonClear;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButtonName = new QPushButton(centralwidget);
        pushButtonName->setObjectName(QString::fromUtf8("pushButtonName"));
        pushButtonName->setGeometry(QRect(50, 100, 100, 50));
        pushButtonAge = new QPushButton(centralwidget);
        pushButtonAge->setObjectName(QString::fromUtf8("pushButtonAge"));
        pushButtonAge->setGeometry(QRect(50, 200, 100, 50));
        labelDisplay = new QLabel(centralwidget);
        labelDisplay->setObjectName(QString::fromUtf8("labelDisplay"));
        labelDisplay->setGeometry(QRect(300, 150, 100, 50));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        labelDisplay->setFont(font);
        labelDisplay->setTextFormat(Qt::TextFormat::PlainText);
        labelDisplay->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButtonClear = new QPushButton(centralwidget);
        pushButtonClear->setObjectName(QString::fromUtf8("pushButtonClear"));
        pushButtonClear->setGeometry(QRect(300, 250, 100, 25));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(pushButtonName, SIGNAL(clicked()), labelDisplay, SLOT(update()));
        QObject::connect(pushButtonAge, SIGNAL(clicked()), labelDisplay, SLOT(update()));
        QObject::connect(pushButtonClear, SIGNAL(clicked()), labelDisplay, SLOT(update()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButtonName->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        pushButtonAge->setText(QCoreApplication::translate("MainWindow", "Age", nullptr));
        labelDisplay->setText(QCoreApplication::translate("MainWindow", "Hello", nullptr));
        pushButtonClear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
