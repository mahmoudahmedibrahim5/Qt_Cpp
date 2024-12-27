#include "thirdquestion.h"
#include "ui_thirdquestion.h"

ThirdQuestion::ThirdQuestion(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ThirdQuestion)
{
    ui->setupUi(this);
    choice = 0;
}

ThirdQuestion::~ThirdQuestion()
{
    delete ui;
}

void ThirdQuestion::on_pushButton_clicked()
{
    if(ui->radioButton1->isChecked())
        choice = 1;
    else if(ui->radioButton2->isChecked())
        choice = 2;
    else if(ui->radioButton3->isChecked())
        choice = 3;
    else if(ui->radioButton4->isChecked())
        choice = 4;
    else
        choice = 0;

    close();
}

