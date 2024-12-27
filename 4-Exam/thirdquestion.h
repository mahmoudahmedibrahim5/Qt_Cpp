#ifndef THIRDQUESTION_H
#define THIRDQUESTION_H

#include <QDialog>

namespace Ui {
class ThirdQuestion;
}

class ThirdQuestion : public QDialog
{
    Q_OBJECT

public:
    explicit ThirdQuestion(QWidget *parent = nullptr);
    ~ThirdQuestion();

    // The number of choice that has been chosen
    int choice;

private slots:
    void on_pushButton_clicked();

private:
    Ui::ThirdQuestion *ui;
};

#endif // THIRDQUESTION_H
