////////////////////////////|
//   RPN Calc				|
//   Version: alpha 0.3     |
//   March 2013				|
/////////////////////////////

#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
