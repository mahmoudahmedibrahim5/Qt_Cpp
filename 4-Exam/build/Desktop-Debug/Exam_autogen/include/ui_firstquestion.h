/********************************************************************************
** Form generated from reading UI file 'firstquestion.ui'
**
** Created by: Qt User Interface Compiler version 5.15.16
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRSTQUESTION_H
#define UI_FIRSTQUESTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FirstQuestion
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton1;
    QRadioButton *radioButton2;
    QRadioButton *radioButton3;
    QRadioButton *radioButton4;

    void setupUi(QDialog *FirstQuestion)
    {
        if (FirstQuestion->objectName().isEmpty())
            FirstQuestion->setObjectName(QString::fromUtf8("FirstQuestion"));
        FirstQuestion->resize(600, 600);
        label = new QLabel(FirstQuestion);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 30, 361, 91));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        pushButton = new QPushButton(FirstQuestion);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(400, 400, 111, 41));
        layoutWidget = new QWidget(FirstQuestion);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 130, 221, 221));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton1 = new QRadioButton(layoutWidget);
        radioButton1->setObjectName(QString::fromUtf8("radioButton1"));

        verticalLayout->addWidget(radioButton1);

        radioButton2 = new QRadioButton(layoutWidget);
        radioButton2->setObjectName(QString::fromUtf8("radioButton2"));

        verticalLayout->addWidget(radioButton2);

        radioButton3 = new QRadioButton(layoutWidget);
        radioButton3->setObjectName(QString::fromUtf8("radioButton3"));

        verticalLayout->addWidget(radioButton3);

        radioButton4 = new QRadioButton(layoutWidget);
        radioButton4->setObjectName(QString::fromUtf8("radioButton4"));

        verticalLayout->addWidget(radioButton4);


        retranslateUi(FirstQuestion);

        QMetaObject::connectSlotsByName(FirstQuestion);
    } // setupUi

    void retranslateUi(QDialog *FirstQuestion)
    {
        FirstQuestion->setWindowTitle(QCoreApplication::translate("FirstQuestion", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("FirstQuestion", "Q1: Choose the third choice ", nullptr));
        pushButton->setText(QCoreApplication::translate("FirstQuestion", "Next", nullptr));
        radioButton1->setText(QCoreApplication::translate("FirstQuestion", "Choice 1", nullptr));
        radioButton2->setText(QCoreApplication::translate("FirstQuestion", "Choice 2", nullptr));
        radioButton3->setText(QCoreApplication::translate("FirstQuestion", "Choice 3", nullptr));
        radioButton4->setText(QCoreApplication::translate("FirstQuestion", "Choice 4", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FirstQuestion: public Ui_FirstQuestion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTQUESTION_H
