#include "mainwindow.h"
#include "./ui_mainwindow.h"

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

void MainWindow::on_pushButtonName_clicked()
{
    ui->labelDisplay->setText("Mahmoud");
}


void MainWindow::on_pushButtonAge_clicked()
{
    ui->labelDisplay->setText("23");
}


void MainWindow::on_pushButtonClear_clicked()
{
    ui->labelDisplay->setText("");
}

