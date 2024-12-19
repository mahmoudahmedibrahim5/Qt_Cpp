#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_errorButton_clicked();

    void on_warningButton_clicked();

    void on_questionButton_clicked();

    void on_infoButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
