#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "firstquestion.h"
#include "secondquestion.h"
#include "thirdquestion.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonExit_clicked();

    void on_pushButtonStart_clicked();

private:
    Ui::MainWindow *ui;
    FirstQuestion *firstQuestion;
    SecondQuestion *secondQuestion;
    ThirdQuestion *thirdQuestion;
};
#endif // MAINWINDOW_H
