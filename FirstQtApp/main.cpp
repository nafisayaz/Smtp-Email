#include "firstqtapp.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FirstQtApp w;
    w.show();

    return a.exec();
}
