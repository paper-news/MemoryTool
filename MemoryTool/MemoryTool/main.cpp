#include "MemoryTool.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MemoryTool w;
    w.show();
    return a.exec();
}
