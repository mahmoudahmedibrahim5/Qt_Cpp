/********************************************************************************
** Form generated from reading UI file 'application.ui'
**
** Created by: Qt User Interface Compiler version 5.15.16
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLICATION_H
#define UI_APPLICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Application
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;

    void setupUi(QDialog *Application)
    {
        if (Application->objectName().isEmpty())
            Application->setObjectName(QString::fromUtf8("Application"));
        Application->resize(696, 423);
        verticalLayout = new QVBoxLayout(Application);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Application);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);


        retranslateUi(Application);

        QMetaObject::connectSlotsByName(Application);
    } // setupUi

    void retranslateUi(QDialog *Application)
    {
        Application->setWindowTitle(QCoreApplication::translate("Application", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Application", "Welcome To The Application", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Application: public Ui_Application {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLICATION_H
