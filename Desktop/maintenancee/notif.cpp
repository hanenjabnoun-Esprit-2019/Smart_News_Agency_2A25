#include "notif.h"

notif::notif()
{
    num=0;


}

notif::notif(QString titre, QString text)
{
    this->text=text;
    this->titre=titre;

}

void notif::afficher()
{
    QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
    notifyIcon->setIcon(QIcon("C:/Users/21626/Desktop/maintenancee/acceuil.png"));
    notifyIcon->show();;
    notifyIcon->showMessage(titre,text,QSystemTrayIcon::Information,150000);




}
