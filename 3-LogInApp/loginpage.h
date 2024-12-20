#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QMainWindow>
#include "application.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class LogInPage;
}
QT_END_NAMESPACE

class LogInPage : public QMainWindow
{
    Q_OBJECT

public:
    LogInPage(QWidget *parent = nullptr);
    ~LogInPage();

private slots:
    void on_pushButtonLogin_clicked();

private:
    Ui::LogInPage *ui;
    Application* app;
};
#endif // LOGINPAGE_H
