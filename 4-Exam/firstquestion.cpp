#include "firstquestion.h"
#include "ui_firstquestion.h"

FirstQuestion::FirstQuestion(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::FirstQuestion)
{
    ui->setupUi(this);
    choice = 0;
}

FirstQuestion::~FirstQuestion()
{
    delete ui;
}

void FirstQuestion::on_pushButton_clicked()
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

