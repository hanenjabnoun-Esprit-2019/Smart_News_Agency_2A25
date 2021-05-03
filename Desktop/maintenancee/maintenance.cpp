#include "maintenance.h"
#include "ui_maintenance.h"
#include "equipement.h"
#include "maintenance1.h"
#include <QMessageBox>
#include <QIntValidator>
#include "connection.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QTableView>
#include <QDialog>
#include <QDebug>
#include <QtPrintSupport/QPrintDialog>
#include <QPrinter>
#include <QPrintPreviewDialog>
#include <QTextDocument>
#include <QtMultimedia/QSound>
#include <QMediaPlayer>



maintenance::maintenance(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::maintenance)
{
Equipement E;
    ui->setupUi(this);
    sound=new QSound("C:/Users/21626/Desktop/maintenancee/ChillingMusic.wav");

    ui->lineEdit_id->setValidator( new QIntValidator(0, 9999999, this));
    ui->tab_equipement->setModel(E.afficher());
}

maintenance::~maintenance()
{
    delete ui;
}

void maintenance::on_pb_ajouter_clicked()
{
    int id=ui->lineEdit_id->text().toInt();
    QString type =ui->lineEdit_type->text();
    int nombre=ui->lineEdit_nombre->text().toInt();
    int prix=ui->lineEdit_prix->text().toInt();
    QString etat =ui->lineEdit_etat->text();
    QString marque =ui->lineEdit_marque->text();

    Equipement E (id,type,nombre,prix,etat,marque);
    bool test=E.ajouter();
    if(test)
    {
        {QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("Ajout effectué.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);}
ui->tab_equipement->setModel(E.afficher());
}
    else
        QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                    QObject::tr("Ajout non effectué.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}


void maintenance::on_pb_supprimer_clicked()
{ Equipement E;
    int id =ui->lineEdit_idsupp->text().toInt();

    bool test=E.supprimer(id);
    if(test)
    {
        {QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("Suppression effectué.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);}
ui->tab_equipement->setModel(E.afficher());
}
    else
        QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                    QObject::tr("Echec de suppression.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}

void maintenance::on_pushButton_maintenance_clicked()
{
     ui->stackedWidget->setCurrentIndex(1);      //SCROLL
}

void maintenance::on_pushButton_equipement_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);      //SCROLL
}

void maintenance::on_pushButton_updateequip_clicked()
{

    int id = ui->lineEdit_idm_2->text().toInt();
    QString type= ui->lineEdit_typem->text();
    int nombre = ui->lineEdit_nombrem->text().toInt();
    int prix = ui->lineEdit_prixm->text().toInt();
    QString etat= ui->lineEdit_etatm->text();
    QString marque= ui->lineEdit_marquem->text();
    Equipement E (id,type, nombre,prix,etat, marque);

  bool test=E.modifier_equipement();
    if (test)
            {
            QMessageBox::information(nullptr, QObject::tr("Modifier un équipement"),
                              QObject::tr("Equipement Modifié.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
            ui->tabWidget_2->setCurrentIndex(1);
            ui->tab_equipement->setModel(E.afficher());
            }
    else
            {
            QMessageBox::critical(nullptr, QObject::tr("Modifier un équipement"),
                              QObject::tr("Erreur !.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
            }

    foreach(QLineEdit* le, findChildren<QLineEdit*>())
        {le->clear();}
}



void maintenance::on_pb_ajouterm_clicked()
{
    int idm=ui->lineEdit_idm->text().toInt();
        int idemp=ui->lineEdit_idemp->text().toInt();
        int idequip=ui->lineEdit_idequip->text().toInt();
        QString typep =ui->lineEdit_typep->text();
        QDate datem =ui->dateEdit->date();

        Maintenance1 M (idm,idemp,idequip,typep,datem);
        bool test=M.ajouter_maintenance();
        if(test)
        {
            {QMessageBox::information(nullptr, QObject::tr("OK"),
                        QObject::tr("Ajout effectué.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);}
    ui->tab_maintenance->setModel(M.afficher_maintenance());
    }
        else
            QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                        QObject::tr("Ajout non effectué.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
}

void maintenance::on_pb_supprimerm_clicked()
{

        Maintenance1 M;
            int idm =ui->lineEdit_idm_3->text().toInt();

            bool test=M.supprimer_maintenance(idm);
            if(test)
            {
                {QMessageBox::information(nullptr, QObject::tr("OK"),
                            QObject::tr("Suppression effectué.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);}
        ui->tab_maintenance->setModel(M.afficher_maintenance());
        }
            else
                QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                            QObject::tr("Echec de suppression.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);
    }



void maintenance::on_pb_updatem_clicked()
{

        int idm = ui->lineEdit_idmm->text().toInt();
        int idemp = ui->lineEdit_idempm->text().toInt();
        int idequip = ui->lineEdit_idequipm->text().toInt();
        QString typep= ui->lineEdit_typepm->text();
        QDate datem= ui->dateEdit_2->date();
        Maintenance1 M (idm,idemp,idequip,typep,datem);

      bool test=M.modifier_maintenance();
        if (test)
                {
                QMessageBox::information(nullptr, QObject::tr("Modifier maintenance"),
                                  QObject::tr("Maintenance Modifiée.\n"
                                              "Click Cancel to exit."), QMessageBox::Cancel);
                ui->tabWidget->setCurrentIndex(1);
                ui->tab_maintenance->setModel(M.afficher_maintenance());
                }
        else
                {
                QMessageBox::critical(nullptr, QObject::tr("Modifier maintenance"),
                                  QObject::tr("Erreur !.\n"
                                              "Click Cancel to exit."), QMessageBox::Cancel);
                }

        foreach(QLineEdit* le, findChildren<QLineEdit*>())
            {le->clear();}
    }


void maintenance::on_pb_trier_clicked()
{
    Equipement E;

            ui->tab_equipement->setModel(E.trier());
}

void maintenance::on_pushButton_7_clicked()
{
    QString strStream;
                   QTextStream out(&strStream);
                   const int rowCount = ui->tab_maintenance->model()->rowCount();
                   const int columnCount =ui->tab_maintenance->model()->columnCount();

                   out <<  "<html>\n"
                           "<head>\n"
                           "<meta Content=\"Text/html; charset=Windows-1251\">\n"
                           <<  QString("<title>%1</title>\n").arg("eleve")
                           <<  "</head>\n"
                           "<body bgcolor=#F4B8B8 link=#5000A0>\n"
                              // "<img src='C:/Users/ksemt/Desktop/final/icon/logo.webp' width='20' height='20'>\n"
                               "<img src='C:/Users/DeLL/Desktop/logooo.png' width='100' height='100'>\n"
                               "<h1>   Liste des Maintenances </h1>"
                                "<h1>  </h1>"

                               "<table border=1 cellspacing=0 cellpadding=2>\n";


                   // headers
                       out << "<thead><tr bgcolor=#f0f0f0>";
                       for (int column = 0; column < columnCount; column++)
                           if (!ui->tab_maintenance->isColumnHidden(column))
                               out << QString("<th>%1</th>").arg(ui->tab_maintenance->model()->headerData(column, Qt::Horizontal).toString());
                       out << "</tr></thead>\n";
                       // data table
                          for (int row = 0; row < rowCount; row++) {
                              out << "<tr>";
                              for (int column = 0; column < columnCount; column++) {
                                  if (!ui->tab_maintenance->isColumnHidden(column)) {
                                      QString data = ui->tab_maintenance->model()->data(ui->tab_maintenance->model()->index(row, column)).toString().simplified();
                                      out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                                  }
                              }
                              out << "</tr>\n";
                          }
                          out <<  "</table>\n"
                              "</body>\n"
                              "</html>\n";

                          QTextDocument *document = new QTextDocument();
                          document ->setHtml(strStream);

                          QPrinter printer;

                          QPrintDialog *dialog = new QPrintDialog(&printer, NULL);
                          if (dialog->exec() == QDialog::Accepted) {
                              document ->print(&printer);
                       }
}


void maintenance::on_rechercheav_cursorPositionChanged(int arg1, int arg2)
{
    Maintenance1 M;
    ui->tab_maintenance->setModel(M.afficherecherche(ui->rechercheav->text()));

        QString test =ui->rechercheav->text();

        if(test=="")
        {
            ui->tab_maintenance->setModel(M.afficher_maintenance());//refresh
        }
}

void maintenance::on_filtrer_clicked()
{
    Equipement E;

            ui->tab_equipement->setModel(E.filtrer());
}

void maintenance::on_pushButton_clicked()
{
    sound->play();
}

void maintenance::on_pushButton_2_clicked()
{
    sound->stop();
}
