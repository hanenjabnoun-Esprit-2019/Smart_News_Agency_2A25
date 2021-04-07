#include "logistic.h"
#include "ui_logistic.h"
#include <QTextDocument>
#include <QtPrintSupport/QPrinter>
#include <QTextDocument>
#include <QPainter>
#include <QMessageBox>

logistic::logistic(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::logistic)
{
    ui->setupUi(this);
    tmpPromgrame.comboboxFill(ui->comboBox);
    tmpPromgrame.comboboxFill(ui->comboBox_2);
    ui->comboBox_triStudio->addItem("ID_STUDIO");
    ui->comboBox_triStudio->addItem("NOMST");
    ui->comboBox_triStudio->addItem("DESCRIPTIONST");

 }

logistic::~logistic()
{
    delete ui;
}



void logistic::on_pushButton_2_clicked()
{
     ui->stackedWidget->setCurrentIndex(1);
     setWindowTitle("Studio");
}

void logistic::on_pushButton_3_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
     setWindowTitle("Programme");
}

void logistic::on_pushButton_ajouterprog_clicked()
{
    int idp = ui->lineEdit_idprog->text().toInt();
    //int ids = ui->lineEdit_studio->text().toInt();
    int ids = ui->comboBox->currentText().toInt();
    QString nomprog= ui->lineEdit_nomprog->text();
       QString typeprog= ui->lineEdit_typeprog->text();
       QString dateprog= ui->lineEdit_dateprog->text();

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
         QMessageBox::critical(nullptr, QObject::tr("Ajouter un programme"),
                     QObject::tr("Erreur !.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);


}

void logistic::on_pushButton_7_clicked()
{
    if(ui->lineEdit_9->text() != "") {
        tmpPromgrame.supprimer_prog(ui->lineEdit_9->text().toInt());
        ui->tableView_prog->setModel(tmpPromgrame.afficher_prog());//refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer un Programme"),
                          QObject::tr("Programme supprime.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);

    }
}

void logistic::on_pushButton_6_clicked()
{
    ui->tableView_prog->setModel(tmpPromgrame.afficher_prog());//refresh
}

void logistic::on_pushButton_8_clicked()
{

    int idstudio = ui->lineEdit_IDS->text().toInt();
    int numeroST = ui->lineEdit_ST_numerost->text().toInt();
    QString nomST= ui->lineEdit_nomst->text();
    QString descriptionST= ui->lineEdit_descriptionst->text();


     STUDIO S(numeroST,idstudio,descriptionST,nomST);
     bool test=S.ajouter_studio();
     if(test)
   {
         ui->tableView->setModel(tmpSTUDIO.afficher_studio());//refresh
   QMessageBox::information(nullptr, QObject::tr("Ajouter un Programme"),
                     QObject::tr("studio ajouté.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);

   }
     else
         QMessageBox::critical(nullptr, QObject::tr("Ajouter un studio"),
                     QObject::tr("Erreur !.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);

     tmpPromgrame.comboboxFill(ui->comboBox);
     tmpPromgrame.comboboxFill(ui->comboBox_2);

}

void logistic::on_pushButton_9_clicked()
{
    ui->tableView->setModel(tmpSTUDIO.afficher_studio());//refresh

}

void logistic::on_pushButton_5_clicked()
{
    if(ui->lineEdit->text() != "") {
       // tmpSTUDIO.setId(id);
        int id = ui->lineEdit->text().toInt();
        if(tmpSTUDIO.supprimer_studio(id))
        QMessageBox::information(nullptr, QObject::tr("Supprimer un Programme"),
                          QObject::tr("studio supprimer.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);
    }
    tmpPromgrame.comboboxFill(ui->comboBox);
    tmpPromgrame.comboboxFill(ui->comboBox_2);
}

void logistic::on_pushButton_10_clicked()
{

    int idstudio = ui->lineEdit_IDS_2->text().toInt();
    int numeroST = ui->lineEdit_ST_numerost_2->text().toInt();
    QString nomST= ui->lineEdit_nomst_2->text();
    QString descriptionST= ui->lineEdit_descriptionst_2->text();


     STUDIO S(numeroST,idstudio,descriptionST,nomST);
     bool test=S.modifier_studio();
     if(test)
   {
         ui->tableView->setModel(tmpSTUDIO.afficher_studio());//refresh
   QMessageBox::information(nullptr, QObject::tr("Modifier un Programme"),
                     QObject::tr("studio modifier.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);

   }
     else
         QMessageBox::critical(nullptr, QObject::tr("Modifier un studio"),
                     QObject::tr("Erreur !.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);


}

void logistic::on_pushButton_ajouterprog_2_clicked()
{
    int idp = ui->lineEdit_idprog_2->text().toInt();
    /*int ids = ui->lineEdit_studio_2->text().toInt();*/
    int ids = ui->comboBox_2->currentText().toInt();
       QString nomprog= ui->lineEdit_nomprog_2->text();
       QString typeprog= ui->lineEdit_typeprog_2->text();
       QString dateprog= ui->lineEdit_dateprog_2->text();

     PROGRAMME P(idp,ids,nomprog,typeprog,dateprog);
     bool test=P.modifier_prog();
     if(test)
   {
         ui->tableView_prog->setModel(tmpPromgrame.afficher_prog());//refresh
   QMessageBox::information(nullptr, QObject::tr("Ajouter un Programme"),
                     QObject::tr("Programme ajouté.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);

   }
     else
         QMessageBox::critical(nullptr, QObject::tr("Ajouter un programme"),
                     QObject::tr("Erreur !.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);


}

void logistic::on_pushButton_clicked()
{
    //vide
}

void logistic::on_comboBox_currentIndexChanged(const QString &arg1)
{
   // QString id_studio=ui->comboBox->currentText();
}

void logistic::on_comboBox_triStudio_currentTextChanged(const QString &arg1)
{
    ui->tableView->setModel(tmpSTUDIO.tri_studio(arg1));
}

void logistic::on_pushButton_11_clicked()
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
                               if (!ui->tableView->isColumnHidden(column))
                                   out << QString("<th>%1</th>").arg(ui->tableView->model()->headerData(column, Qt::Horizontal).toString());
                           out << "</tr></thead>\n";
                           // data table
                              for (int row = 0; row < rowCount; row++) {
                                  out << "<tr>";
                                  for (int column = 0; column < columnCount; column++) {
                                      if (!ui->tableView->isColumnHidden(column)) {
                                          QString data = ui->tableView->model()->data(ui->tableView->model()->index(row, column)).toString().simplified();
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
