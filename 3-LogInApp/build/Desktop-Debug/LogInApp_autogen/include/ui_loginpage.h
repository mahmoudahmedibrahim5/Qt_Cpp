/********************************************************************************
** Form generated from reading UI file 'loginpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.16
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINPAGE_H
#define UI_LOGINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogInPage
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *textBrowser;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *labelUsername;
    QLineEdit *lineEditUsername;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelPassword;
    QLineEdit *lineEditPassword;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButtonLogin;
    QSpacerItem *horizontalSpacer_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LogInPage)
    {
        if (LogInPage->objectName().isEmpty())
            LogInPage->setObjectName(QString::fromUtf8("LogInPage"));
        LogInPage->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LogInPage->sizePolicy().hasHeightForWidth());
        LogInPage->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        LogInPage->setFont(font);
        centralwidget = new QWidget(LogInPage);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(20);
        sizePolicy1.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(false);
        textBrowser->setFont(font1);

        verticalLayout_2->addWidget(textBrowser);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(verticalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(50, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        labelUsername = new QLabel(centralwidget);
        labelUsername->setObjectName(QString::fromUtf8("labelUsername"));
        labelUsername->setMinimumSize(QSize(99, 0));
        labelUsername->setMaximumSize(QSize(100, 16777215));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        labelUsername->setFont(font2);
        labelUsername->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        labelUsername->setTextFormat(Qt::TextFormat::AutoText);
        labelUsername->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(labelUsername);

        lineEditUsername = new QLineEdit(centralwidget);
        lineEditUsername->setObjectName(QString::fromUtf8("lineEditUsername"));

        horizontalLayout->addWidget(lineEditUsername);

        horizontalSpacer_3 = new QSpacerItem(100, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(50, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        labelPassword = new QLabel(centralwidget);
        labelPassword->setObjectName(QString::fromUtf8("labelPassword"));
        labelPassword->setEnabled(true);
        labelPassword->setMinimumSize(QSize(99, 0));
        labelPassword->setMaximumSize(QSize(100, 16777215));
        labelPassword->setFont(font2);
        labelPassword->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        labelPassword->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(labelPassword);

        lineEditPassword = new QLineEdit(centralwidget);
        lineEditPassword->setObjectName(QString::fromUtf8("lineEditPassword"));

        horizontalLayout_2->addWidget(lineEditPassword);

        horizontalSpacer_4 = new QSpacerItem(100, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_6 = new QSpacerItem(150, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        pushButtonLogin = new QPushButton(centralwidget);
        pushButtonLogin->setObjectName(QString::fromUtf8("pushButtonLogin"));
        sizePolicy.setHeightForWidth(pushButtonLogin->sizePolicy().hasHeightForWidth());
        pushButtonLogin->setSizePolicy(sizePolicy);
        pushButtonLogin->setMaximumSize(QSize(16777215, 16777215));
        pushButtonLogin->setFont(font2);
        pushButtonLogin->setIconSize(QSize(8, 16));

        horizontalLayout_3->addWidget(pushButtonLogin);

        horizontalSpacer_5 = new QSpacerItem(150, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        LogInPage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LogInPage);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        LogInPage->setMenuBar(menubar);
        statusbar = new QStatusBar(LogInPage);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        LogInPage->setStatusBar(statusbar);

        retranslateUi(LogInPage);

        QMetaObject::connectSlotsByName(LogInPage);
    } // setupUi

    void retranslateUi(QMainWindow *LogInPage)
    {
        LogInPage->setWindowTitle(QCoreApplication::translate("LogInPage", "LogInPage", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("LogInPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt; font-weight:700;\">Welcome</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:700;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:"
                        "0; text-indent:0px;\"><span style=\" font-weight:700;\">Please enter your username and password</span></p></body></html>", nullptr));
        labelUsername->setText(QCoreApplication::translate("LogInPage", "Username", nullptr));
        labelPassword->setText(QCoreApplication::translate("LogInPage", "Password", nullptr));
        pushButtonLogin->setText(QCoreApplication::translate("LogInPage", "Log in", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogInPage: public Ui_LogInPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H
