#include "loginpage.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LogInPage w;
    w.show();
    return a.exec();
}
