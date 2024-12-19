#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>

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

void MainWindow::on_errorButton_clicked()
{
    QMessageBox::critical(this, "Title", "Error Message");
}


void MainWindow::on_warningButton_clicked()
{
    QMessageBox::warning(this, "Title", "Warning Message");
}


void MainWindow::on_questionButton_clicked()
{
    QMessageBox::StandardButton but = QMessageBox::question(this, "Title", "Question Message?", QMessageBox::Yes | QMessageBox::No);
    if(but == QMessageBox::Yes)
        QApplication::quit();
    else
        qDebug() << "No is chosen";
}


void MainWindow::on_infoButton_clicked()
{
    QMessageBox::information(this, "Title", "Information Message");
}

