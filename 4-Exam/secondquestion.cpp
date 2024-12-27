#include "secondquestion.h"
#include "ui_secondquestion.h"

SecondQuestion::SecondQuestion(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SecondQuestion)
{
    ui->setupUi(this);
    choice = 0;
}

SecondQuestion::~SecondQuestion()
{
    delete ui;
}

void SecondQuestion::on_pushButton_clicked()
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

