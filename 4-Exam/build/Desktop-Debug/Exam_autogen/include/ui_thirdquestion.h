/********************************************************************************
** Form generated from reading UI file 'thirdquestion.ui'
**
** Created by: Qt User Interface Compiler version 5.15.16
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THIRDQUESTION_H
#define UI_THIRDQUESTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ThirdQuestion
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

    void setupUi(QDialog *ThirdQuestion)
    {
        if (ThirdQuestion->objectName().isEmpty())
            ThirdQuestion->setObjectName(QString::fromUtf8("ThirdQuestion"));
        ThirdQuestion->resize(600, 600);
        layoutWidget = new QWidget(ThirdQuestion);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 140, 221, 221));
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

        label = new QLabel(ThirdQuestion);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 40, 361, 91));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        pushButton = new QPushButton(ThirdQuestion);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(400, 400, 111, 41));

        retranslateUi(ThirdQuestion);

        QMetaObject::connectSlotsByName(ThirdQuestion);
    } // setupUi

    void retranslateUi(QDialog *ThirdQuestion)
    {
        ThirdQuestion->setWindowTitle(QCoreApplication::translate("ThirdQuestion", "Dialog", nullptr));
        radioButton1->setText(QCoreApplication::translate("ThirdQuestion", "Choice 1", nullptr));
        radioButton2->setText(QCoreApplication::translate("ThirdQuestion", "Choice 2", nullptr));
        radioButton3->setText(QCoreApplication::translate("ThirdQuestion", "Choice 3", nullptr));
        radioButton4->setText(QCoreApplication::translate("ThirdQuestion", "Choice 4", nullptr));
        label->setText(QCoreApplication::translate("ThirdQuestion", "Q3: Choose the fourth choice ", nullptr));
        pushButton->setText(QCoreApplication::translate("ThirdQuestion", "Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ThirdQuestion: public Ui_ThirdQuestion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THIRDQUESTION_H
