#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonExit_clicked()
{
    close();
}


void MainWindow::on_pushButtonStart_clicked()
{
    firstQuestion = new FirstQuestion(this);
    hide();
    firstQuestion->exec();

    secondQuestion = new SecondQuestion(this);
    secondQuestion->exec();

    thirdQuestion = new ThirdQuestion(this);
    thirdQuestion->exec();

    // Calculate the result
    int result = 0;

    if(firstQuestion->choice == 3)
        result++;

    if(secondQuestion->choice == 1)
        result++;

    if(thirdQuestion->choice == 4)
        result++;

    QString resultMsg = "You have scored 0";
    resultMsg[16] = '0' + result;
    QMessageBox::information(this, "Result", resultMsg);

    show();
}

