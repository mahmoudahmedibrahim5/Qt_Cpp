#ifndef FIRSTQUESTION_H
#define FIRSTQUESTION_H

#include <QDialog>

namespace Ui {
class FirstQuestion;
}

class FirstQuestion : public QDialog
{
    Q_OBJECT

public:
    explicit FirstQuestion(QWidget *parent = nullptr);
    ~FirstQuestion();

    // The number of choice that has been chosen
    int choice;

private slots:
    void on_pushButton_clicked();

private:
    Ui::FirstQuestion *ui;
};

#endif // FIRSTQUESTION_H
