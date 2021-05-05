#include "mainwindow.h"
#include <QApplication>
#include "connection.h"
#include <QMessageBox>
#include <QFile>
#include <QtDebug>
#include "arduino.h"
#include <QTranslator>
#include <QInputDialog>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTranslator myappTranslator;

    QStringList languages ;
    languages << "Francais" << "Anglais";

    QString lang = QInputDialog::getItem(NULL, "Choisir la langue", "Langue", languages);

    if (lang == "Anglais") {
        myappTranslator.load(":/English.qm");
        a.installTranslator(&myappTranslator);
    }

    MainWindow w;
    Connection C;
    Arduino A;
    QFile styleSheetFile("C:/Users/achraf/Desktop/2A25/qt/Gestion_Marketing/SpyBot.qss");
        styleSheetFile.open(QFile::ReadOnly);
    QString styleSheet= QLatin1String(styleSheetFile.readAll());
    a.setStyleSheet(styleSheet);
  //  A.Write_to_Arduino("1");

    bool test=C.Openconn();
    if(test)
       qDebug() <<"Connection réussite";
       // QMessageBox::information(nullptr, QObject::tr("Database is open"),
                              //   QObject::tr("Connection succeful. \n" "Click ok to exit"),QMessageBox::Ok);
    else
       qDebug() <<"Error connection";
       // QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                               //  QObject::tr("Connection failed. \n" "Click Cancel to exit"),QMessageBox::Cancel);
    //w.showFullScreen();
    w.show();

    return a.exec();
}
