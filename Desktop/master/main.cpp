#include "mainwindow.h"
#include <QFile>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();


    QFile styleSheetFile("C:/Users/21626/Desktop/master/SpyBot.qss");
            styleSheetFile.open(QFile::ReadOnly);
        QString styleSheet= QLatin1String(styleSheetFile.readAll());
        a.setStyleSheet(styleSheet);

    return a.exec();

}
