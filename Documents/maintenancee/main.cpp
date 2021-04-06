#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include <QDebug>
#include "connection.h"
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    connection c;
    bool test=c.createconnect();
    MainWindow w;
    if(test)
    {w.show();
        QMessageBox::information(nullptr, QObject::tr("database is open"),
                    QObject::tr("connection successful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
    else
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                    QObject::tr("connection failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);





    QFile styleSheetFile("C:/Users/21626/Desktop/maintenancee/SpyBot.qss");
            styleSheetFile.open(QFile::ReadOnly);
        QString styleSheet= QLatin1String(styleSheetFile.readAll());
        a.setStyleSheet(styleSheet);
        return a.exec();
}

