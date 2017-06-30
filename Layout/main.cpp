#include "hlayout.h"
#include <QApplication>

#include <glayout.h>
#include <stacklayout.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    StackLayout s;
    s.show();

    return a.exec();
}
