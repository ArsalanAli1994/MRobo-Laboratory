#include "mroboticlab.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Mroboticlab w;
    w.show();
    return a.exec();
}
