#include "paintdevice.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PaintDevice w;
    w.show();

    return a.exec();
}
