#include "loginpage.h"
#include "./ui_loginpage.h"
#include <QMessageBox>
#include <QPalette>

#define DATABASE_SIZE   3
QString database[DATABASE_SIZE][2] = {
    {"user1", "pass1"},
    {"user2", "pass2"},
    {"user3", "pass3"}
};

LogInPage::LogInPage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LogInPage)
{
    ui->setupUi(this);
}

LogInPage::~LogInPage()
{
    delete ui;
}

void LogInPage::on_pushButtonLogin_clicked()
{
    QString username = ui->lineEditUsername->text();
    QString password = ui->lineEditPassword->text();

    bool found = false;
    for(int i = 0; i < DATABASE_SIZE; i++)
    {
        if(username == database[i][0] && password == database[i][1]){
            found = true;
            // Correct username and password
            app = new Application(this);

            // Open the application page
            hide();
            app->show();

            // Whenever the application page is closed, unhide the login page again
            app->exec();
            show();
        }
    }

    if(!found){
        // Wrong
        //QMessageBox::critical(this, "Try Again", "Wrong username or password");

        // Show the message for 3 seconds
        ui->statusbar->showMessage("Wrong username or password", 3000);

        // Get the current palette of the status bar
        QPalette palette = statusBar()->palette();

        // Set the desired color (e.g., red)
        palette.setColor(QPalette::WindowText, Qt::red);

        // Apply the palette to the status bar
        statusBar()->setPalette(palette);
    }
}

