#include "application.h"
#include "ui_application.h"

Application::Application(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Application)
{
    ui->setupUi(this);
}

Application::~Application()
{
    delete ui;
}
