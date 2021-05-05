#include "logistic.h"
#include "ui_logistic.h"
#include <QTextDocument>
#include <QtPrintSupport/QPrinter>
#include <QTextDocument>
#include <QPainter>
#include <QMessageBox>
#include <QString>
#include "studio.h"
logistic::logistic(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::logistic)
{
    ui->setupUi(this);
    //Controle de saisie
    ui->lineEdit_idprog->setValidator(new QIntValidator(0,999,this));
    ui->lineEdit_IDS->setValidator(new QIntValidator(0,999,this));
    ui->lineEdit_ST_numerost->setValidator(new QIntValidator(0,999,this));

    ui->tableView_studio->setModel(tmpSTUDIO.afficher_studio());
    ui->supprimer_studio_2->setModel(tmpSTUDIO.afficher_idStudio());
    ui->comboBox_idst->setModel(tmpSTUDIO.afficher_idStudio());
    ui->supprimer_programme->setModel(tmpPromgrame.afficher_idprog());


}

logistic::~logistic()
{
    delete ui;
}

void logistic::on_ajout_studio_clicked()
{
    int idstudio = ui->lineEdit_IDS->text().toInt();
    int numeroST = ui->lineEdit_ST_numerost->text().toInt();
    QString nomST= ui->lineEdit_nomst->text();
    QString descriptionST= ui->lineEdit_descriptionst->text();


     STUDIO S(numeroST,idstudio,descriptionST,nomST);
     bool test=S.ajouter_studio();
     if(test)
   {
         ui->tableView_studio->setModel(tmpSTUDIO.afficher_studio());//refresh
   QMessageBox::information(nullptr, QObject::tr("Ajouter un Programme"),
                     QObject::tr("studio ajouté.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);

   }
     else
         QMessageBox::critical(nullptr, QObject::tr("Ajouter un studio"),
                     QObject::tr("Erreur !.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);

     tmpPromgrame.comboboxFill(ui->comboBox_idst);
     ui->supprimer_studio_2->setModel(tmpSTUDIO.afficher_idStudio());

     ui->tableView_studio->setModel(tmpSTUDIO.afficher_studio());//affichage studio
     ui->tabWidget_logistic->setCurrentIndex(1);



}

void logistic::on_tableView_studio_doubleClicked(const QModelIndex &index)
{
    QString x = ui->tableView_studio->model()->data(ui->tableView_studio->model()->index(index.row(),0)).toString();
    ui->lineEdit_IDS_2->setText(x);

     x = ui->tableView_studio->model()->data(ui->tableView_studio->model()->index(index.row(),1)).toString();
     ui->lineEdit_ST_numerost_2->setText(x);

     x = ui->tableView_studio->model()->data(ui->tableView_studio->model()->index(index.row(),2)).toString();
     ui->lineEdit_nomst_2->setText(x);

     x = ui->tableView_studio->model()->data(ui->tableView_studio->model()->index(index.row(),3)).toString();
     ui->lineEdit_descriptionst_2->setText(x);



    ui->tabWidget_logistic->setCurrentIndex(2);

    qDebug() << x;
}

void logistic::on_modifier_studio_clicked()
{
    int idstudio = ui->lineEdit_IDS_2->text().toInt();
    int numeroST = ui->lineEdit_ST_numerost_2->text().toInt();
    QString nomST= ui->lineEdit_nomst_2->text();
    QString descriptionST= ui->lineEdit_descriptionst_2->text();


     STUDIO S(numeroST,idstudio,descriptionST,nomST);
     bool test=S.modifier_studio();
     if(test)
   {
         ui->tableView_studio->setModel(tmpSTUDIO.afficher_studio());//refresh
   QMessageBox::information(nullptr, QObject::tr("Modifier un Programme"),
                     QObject::tr("studio modifier.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);

   }
     else
         QMessageBox::critical(nullptr, QObject::tr("Modifier un studio"),
                     QObject::tr("Erreur !.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);


}

void logistic::on_supprimer_studio_clicked()
{
    int id = ui->supprimer_studio_2->currentText().toInt();
    bool test=tmpSTUDIO.supprimer_studio(id);
    if(test)
    {ui->tableView_studio->setModel(tmpSTUDIO.afficher_studio());//refresh
        QMessageBox::information(nullptr, QObject::tr("Studio une Publicité"),
                    QObject::tr("Studio supprimée.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer un Studio"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    ui->supprimer_studio_2->setModel(tmpSTUDIO.afficher_idStudio());
    tmpPromgrame.comboboxFill(ui->comboBox_idst);
}

void logistic::on_studio_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    setWindowTitle("Studio");
}

void logistic::on_programme_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    setWindowTitle("Programme");
}

void logistic::on_ajouter_prog_clicked()
{

    int idp = ui->lineEdit_idprog->text().toInt();
    int ids = ui->comboBox_idst->currentText().toInt();
    QString nomprog= ui->lineEdit_nomprog->text();
       QString typeprog= ui->lineEdit_typeprog->text();
       QString dateprog= ui->lineEdit_dateprog->text();
       ui->lineEdit_typeprog->setText(QString::number(ids));

     PROGRAMME P(idp,ids,nomprog,typeprog,dateprog);
     bool test=P.ajouter_prog();
     if(test)
   {
         ui->tableView_prog->setModel(tmpPromgrame.afficher_prog());//refresh
   QMessageBox::information(nullptr, QObject::tr("Ajouter un Programme"),
                     QObject::tr("Programme ajouté.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);
        P.sendMail();
   }
     else
     {
         QMessageBox::critical(nullptr, QObject::tr("Ajouter un programme"),
                     QObject::tr("Erreur !.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);
}
}

void logistic::on_tableView_prog_doubleClicked(const QModelIndex &index)
{
    QString x = ui->tableView_prog->model()->data(ui->tableView_prog->model()->index(index.row(),0)).toString();
    ui->id_prog_edit->setText(x);
    x = ui->tableView_prog->model()->data(ui->tableView_prog->model()->index(index.row(),1)).toString();
    ui->id_studiop_edit->setText(x);

     x = ui->tableView_prog->model()->data(ui->tableView_prog->model()->index(index.row(),2)).toString();
     ui->type_prog_edit->setText(x);

     x = ui->tableView_prog->model()->data(ui->tableView_prog->model()->index(index.row(),3)).toString();
     ui->nom_prog_edit->setText(x);

     x = ui->tableView_prog->model()->data(ui->tableView_prog->model()->index(index.row(),4)).toString();
     ui->date_prog_edit->setText(x);



    ui->tabWidget_programme->setCurrentIndex(2);

    qDebug() << x;
}

void logistic::on_PDF_clicked()
{
    QString strStream;
                       QTextStream out(&strStream);
                       const int rowCount = ui->tableView_prog->model()->rowCount();
                       const int columnCount =ui->tableView_prog->model()->columnCount();

                       out <<  "<html>\n"
                               "<head>\n"
                               "<meta Content=\"Text/html; charset=Windows-1251\">\n"
                               <<  QString("<title>%1</title>\n").arg("program")
                               <<  "</head>\n"
                               "<body bgcolor=#CFC4E1 link=#5000A0>\n"
                                   "<img src=':/new/prefix1/icon/logo.webp' width='100' height='100'>\n"
                                   "<h1>Liste des programmes </h1>"



                                   "<table border=1 cellspacing=0 cellpadding=2>\n";


                       // headers
                           out << "<thead><tr bgcolor=#f0f0f0>";
                           for (int column = 0; column < columnCount; column++)
                               if (!ui->tableView_prog->isColumnHidden(column))
                                   out << QString("<th>%1</th>").arg(ui->tableView_prog->model()->headerData(column, Qt::Horizontal).toString());
                           out << "</tr></thead>\n";
                           // data table
                              for (int row = 0; row < rowCount; row++) {
                                  out << "<tr>";
                                  for (int column = 0; column < columnCount; column++) {
                                      if (!ui->tableView_prog->isColumnHidden(column)) {
                                          QString data = ui->tableView_prog->model()->data(ui->tableView_prog->model()->index(row, column)).toString().simplified();
                                          out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                                      }
                                  }
                                  out << "</tr>\n";
                              }
                              out <<  "</table>\n"
                                  "</body>\n"
                                  "</html>\n";

               QTextDocument *document = new QTextDocument();
                   document->setHtml(strStream);


                 //  QTextDocument document;
                  // document.setHtml(html);
                   QPrinter printer(QPrinter::PrinterResolution);
                   printer.setOutputFormat(QPrinter::PdfFormat);
                   printer.setOutputFileName("program.pdf");
                   document->print(&printer);
}

void logistic::on_supprimer_prog_clicked()
{
    int id = ui->supprimer_programme->currentText().toInt();
    bool test=tmpPromgrame.supprimer_prog(id);
    if(test)
    {ui->tableView_prog->setModel(tmpPromgrame.afficher_prog());//refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer un Programme"),
                    QObject::tr("Programme supprimée.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer un Programme"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    ui->supprimer_programme->setModel(tmpPromgrame.afficher_idprog());
    ui->tabWidget_programme->setCurrentIndex(1);


}

void logistic::on_afficher_prog_clicked()
{
    ui->tableView_prog->setModel(tmpPromgrame.afficher_prog());

}

void logistic::on_modifier_prog_clicked()
{
    int idp = ui->id_prog_edit->text().toInt();
    int ids = ui->id_studiop_edit->text().toInt();
    QString typeprog= ui->type_prog_edit->text();
    QString nomprog= ui->nom_prog_edit->text();
    QString dateprog= ui->date_prog_edit->text();


  PROGRAMME P(idp, ids, typeprog, nomprog, dateprog);
  bool test=P.modifier_prog();
    if (test)
            {
            QMessageBox::information(nullptr, QObject::tr("Modifier un programme"),
                              QObject::tr("programme Modifiée.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
            ui->tabWidget_programme->setCurrentIndex(1);
            ui->tableView_prog->setModel(P.afficher_prog());
            }
    else
            {
            QMessageBox::critical(nullptr, QObject::tr("Modifier une Publicitée"),
                              QObject::tr("Erreur !.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
            }

    foreach(QLineEdit* le, findChildren<QLineEdit*>())
        {le->clear();}
   }


