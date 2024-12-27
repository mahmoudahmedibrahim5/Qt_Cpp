/********************************************************************************
** Form generated from reading UI file 'secondquestion.ui'
**
** Created by: Qt User Interface Compiler version 5.15.16
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDQUESTION_H
#define UI_SECONDQUESTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecondQuestion
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton1;
    QRadioButton *radioButton2;
    QRadioButton *radioButton3;
    QRadioButton *radioButton4;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *SecondQuestion)
    {
        if (SecondQuestion->objectName().isEmpty())
            SecondQuestion->setObjectName(QString::fromUtf8("SecondQuestion"));
        SecondQuestion->resize(600, 600);
        layoutWidget = new QWidget(SecondQuestion);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 130, 221, 221));
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

        label = new QLabel(SecondQuestion);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 40, 361, 91));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        pushButton = new QPushButton(SecondQuestion);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(400, 400, 111, 41));

        retranslateUi(SecondQuestion);

        QMetaObject::connectSlotsByName(SecondQuestion);
    } // setupUi

    void retranslateUi(QDialog *SecondQuestion)
    {
        SecondQuestion->setWindowTitle(QCoreApplication::translate("SecondQuestion", "Dialog", nullptr));
        radioButton1->setText(QCoreApplication::translate("SecondQuestion", "Choice 1", nullptr));
        radioButton2->setText(QCoreApplication::translate("SecondQuestion", "Choice 2", nullptr));
        radioButton3->setText(QCoreApplication::translate("SecondQuestion", "Choice 3", nullptr));
        radioButton4->setText(QCoreApplication::translate("SecondQuestion", "Choice 4", nullptr));
        label->setText(QCoreApplication::translate("SecondQuestion", "Q2: Choose the first choice ", nullptr));
        pushButton->setText(QCoreApplication::translate("SecondQuestion", "Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecondQuestion: public Ui_SecondQuestion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDQUESTION_H
