#ifndef SECONDQUESTION_H
#define SECONDQUESTION_H

#include <QDialog>

namespace Ui {
class SecondQuestion;
}

class SecondQuestion : public QDialog
{
    Q_OBJECT

public:
    explicit SecondQuestion(QWidget *parent = nullptr);
    ~SecondQuestion();

    // The number of choice that has been chosen
    int choice;


private slots:
    void on_pushButton_clicked();

private:
    Ui::SecondQuestion *ui;
};

#endif // SECONDQUESTION_H
