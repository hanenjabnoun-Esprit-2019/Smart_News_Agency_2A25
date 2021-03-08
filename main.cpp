#include "mainwindow.h"
#include <QApplication>
#include "connection.h"
#include <QMessageBox>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Connection C;
    QFile styleSheetFile("C:/Users/achraf/Desktop/2A25/qt/BestNews/SpyBot.qss");
        styleSheetFile.open(QFile::ReadOnly);
    QString styleSheet= QLatin1String(styleSheetFile.readAll());
    a.setStyleSheet(styleSheet);
    bool test=C.Openconn();
    if(test)
       // qDebug() <<"Connection réussite";
        QMessageBox::information(nullptr, QObject::tr("Database is open"),
                                 QObject::tr("Connection succeful. \n" "Click ok to exit"),QMessageBox::Ok);
    else
       // qDebug() <<"Error connection";
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                                 QObject::tr("Connection failed. \n" "Click Cancel to exit"),QMessageBox::Cancel);

    w.show();

    return a.exec();
}
