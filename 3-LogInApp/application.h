#ifndef APPLICATION_H
#define APPLICATION_H

#include <QDialog>

namespace Ui {
class Application;
}

class Application : public QDialog
{
    Q_OBJECT

public:
    explicit Application(QWidget *parent = nullptr);
    ~Application();

private:
    Ui::Application *ui;
};

#endif // APPLICATION_H
