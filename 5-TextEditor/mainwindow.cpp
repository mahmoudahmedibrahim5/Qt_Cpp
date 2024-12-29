#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QDir>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>

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


void MainWindow::on_pushButtonOpenFile_clicked()
{
    fileName = QFileDialog::getOpenFileName(this, "Open a file", QDir::homePath());
    ui->labelPath->setText(fileName);
}


void MainWindow::on_pushButtonRead_clicked()
{
    // Open the file
    QFile *fptr = new QFile(fileName);

    // Check if the file opened succesfully
    if(!fptr->open(QFile::ReadOnly)){
        // If the file isn't chosen yet (fileName variable isn't assigned)
        QMessageBox::critical(this, "Error", "Open a valid file");
        return;
    }

    // Read the content and write it into plain text
    ui->plainTextEdit->setPlainText(fptr->readAll());

    // close the file
    fptr->close();
}


void MainWindow::on_pushButtonWrite_clicked()
{
    // Open the file
    QFile *fptr = new QFile(fileName);

    // Check if the file opened succesfully
    if(!fptr->open(QFile::WriteOnly)){
        // If the file isn't chosen yet (fileName variable isn't assigned)
        QMessageBox::critical(this, "Error", "Open a valid file");
        return;
    }

    // Write the data into the file
    QTextStream out(fptr);
    out << ui->plainTextEdit->toPlainText();
    fptr->flush();


    // close the file
    fptr->close();
}

