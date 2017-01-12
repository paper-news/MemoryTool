#include "MemoryTool.h"
#include <QtWidgets/QApplication>
#include <QtCore/QTextCodec>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
	QTextCodec::setCodecForLocale(QTextCodec::codecForLocale());
	QTextCodec::setCodecForLocale(QTextCodec::codecForName("utf8"));
    MemoryTool w;
    w.show();
    return a.exec();
}
