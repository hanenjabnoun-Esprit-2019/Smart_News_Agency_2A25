#include "finance.h"
#include "ui_finance.h"
#include <QMessageBox>
#include <QFile>
#include <QPrinter>
#include <QTextDocument>
#include <QPrintDialog>
#include <QTextStream>
#include<QFileInfo>
#include<QFileDialog>

Finance::Finance(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Finance)
{
    ui->setupUi(this);



    refrech();

    ui->cb_sort_r->addItem("datee");
    ui->cb_sort_r->addItem("libelle");
    ui->cb_sort_r->addItem("montant");
    ui->le_montant_r_ajout->setValidator( new QIntValidator(0, 100000, this) );
    ui->le_montant_r_ajout_2->setValidator( new QIntValidator(0, 100000, this) );

    ui->comboBox_tri_dp->addItem("datee");
    ui->comboBox_tri_dp->addItem("libelle");
    ui->comboBox_tri_dp->addItem("montant");
    ui->le_montant_r_ajout_3->setValidator( new QIntValidator(0, 100000, this) );
    ui->le_montant_r_ajout_4->setValidator( new QIntValidator(0, 100000, this) );

}

Finance::~Finance()
{
    delete ui;
}

void Finance::refrech()
{
    __R.fillComboBoxId(ui->cb_r_id_modif);
    __R.fillComboBoxId(ui->cb_supp_r);
    __R.fillEmp(ui->cb_r_emp_ajout);
    __R.fillEmp(ui->cb_r_emp_ajout_2);
    ui->tableView_Revenue->setModel(__R.afficher());

    __D.fillComboBoxId(ui->cb_r_id_modif_2);
    __D.fillComboBoxId(ui->cb_d_supp);
    __D.fillEmp(ui->cb_r_emp_ajout_3);
    __D.fillEmp(ui->cb_r_emp_ajout_4);
    ui->tableView_depense->setModel(__D.afficher());

}

void Finance::on_pushButton_Dp_clicked()
{
    ui->stackedWidget_Finance->setCurrentIndex(0);
}

void Finance::on_pushButton_Revenue_clicked()
{
    ui->stackedWidget_Finance->setCurrentIndex(1);
}

void Finance::on_pushButton_ajoutRevenue_clicked()
{
    Revenues _r_r(ui->le_id_r_ajout->text().toInt(), ui->de_date_r_ajout->text(), ui->le_montant_r_ajout->text(), ui->le_libelle_r_ajout->text(), ui->cb_r_emp_ajout->currentText().toInt());
    if(_r_r.ajouter()) {
        _r_r.sendMail();
        refrech();
        QMessageBox::information(nullptr, QObject::tr("Ajouter un Revenue"),
                           QObject::tr("Ajout avec succès !.\n"
                                       "Click Close to exit."), QMessageBox::Close);
    }
    else {
        QMessageBox::critical(nullptr, QObject::tr("Ajouter un Revenue"),
                           QObject::tr("Erreur!.\n"
                                       "Click Close to exit."), QMessageBox::Close);
    }
}

void Finance::on_pushButton_supprimerRevenue_clicked()
{
    Revenues _r_r;
    _r_r.setId(ui->cb_supp_r->currentText().toInt());
    if(_r_r.supprimer()) {
        refrech();
        QMessageBox::information(nullptr, QObject::tr("Supprimer un Revenue"),
                           QObject::tr("Supprimer avec succès !.\n"
                                       "Click Close to exit."), QMessageBox::Close);
    }
    else {
        QMessageBox::critical(nullptr, QObject::tr("Supprimer un Revenue"),
                           QObject::tr("Erreur!.\n"
                                       "Click Close to exit."), QMessageBox::Close);
    }
}

void Finance::on_pushButton_modifierRevenue_clicked()
{
    Revenues _r_r(ui->cb_r_id_modif->currentText().toInt(), ui->de_date_r_ajout_2->text(), ui->le_montant_r_ajout_2->text(), ui->le_libelle_r_ajout_2->text(), ui->cb_r_emp_ajout_2->currentText().toInt());
    if(_r_r.modifier()) {
        refrech();
        QMessageBox::information(nullptr, QObject::tr("Modfier un Revenue"),
                           QObject::tr("Modfier avec succès !.\n"
                                       "Click Close to exit."), QMessageBox::Close);
    }
    else {
        QMessageBox::critical(nullptr, QObject::tr("Ajouter un Revenue"),
                           QObject::tr("Erreur!.\n"
                                       "Click Close to exit."), QMessageBox::Close);
    }
}

void Finance::on_cb_sort_r_currentTextChanged(const QString &arg1)
{
    ui->tableView_Revenue->setModel(__R.sort(arg1));
}

void Finance::on_le_r_search_textChanged(const QString &arg1)
{
    ui->tableView_Revenue->setModel(__R.search(arg1));
}

void Finance::on_pushButton_ajoutDepense_clicked()
{
    Depenses _r_r(ui->le_id_r_ajout_2->text().toInt(), ui->de_date_r_ajout_3->text(), ui->le_montant_r_ajout_3->text(), ui->le_libelle_r_ajout_3->text(), ui->cb_r_emp_ajout_3->currentText().toInt());
    if(_r_r.ajouter()) {
        _r_r.sendMail();
        refrech();
        QMessageBox::information(nullptr, QObject::tr("Ajouter un Depenses"),
                           QObject::tr("Ajout avec succès !.\n"
                                       "Click Close to exit."), QMessageBox::Close);
    }
    else {
        QMessageBox::critical(nullptr, QObject::tr("Ajouter un Depenses"),
                           QObject::tr("Erreur!.\n"
                                       "Click Close to exit."), QMessageBox::Close);
    }
}

void Finance::on_pushButton_editDepense_clicked()
{
    Depenses _r_r(ui->cb_r_id_modif_2->currentText().toInt(), ui->de_date_r_ajout_4->text(), ui->le_montant_r_ajout_4->text(), ui->le_libelle_r_ajout_4->text(), ui->cb_r_emp_ajout_4->currentText().toInt());
    if(_r_r.modifier()) {
        refrech();
        QMessageBox::information(nullptr, QObject::tr("Modfier un Depenses"),
                           QObject::tr("Modfier avec succès !.\n"
                                       "Click Close to exit."), QMessageBox::Close);
    }
    else {
        QMessageBox::critical(nullptr, QObject::tr("Modfier un Depenses"),
                           QObject::tr("Erreur!.\n"
                                       "Click Close to exit."), QMessageBox::Close);
    }
}

void Finance::on_pushButton_supprimerDepense_clicked()
{
    Depenses _r_r;
    _r_r.setId(ui->cb_d_supp->currentText().toInt());
    if(_r_r.supprimer()) {
        refrech();
        QMessageBox::information(nullptr, QObject::tr("Supprimer un Depenses"),
                           QObject::tr("Supprimer avec succès !.\n"
                                       "Click Close to exit."), QMessageBox::Close);
    }
    else {
        QMessageBox::critical(nullptr, QObject::tr("Supprimer un Depenses"),
                           QObject::tr("Erreur!.\n"
                                       "Click Close to exit."), QMessageBox::Close);
    }
}

void Finance::on_recherche_depense_textChanged(const QString &arg1)
{
    ui->tableView_depense->setModel(__D.search(arg1));
}

void Finance::on_comboBox_tri_dp_currentTextChanged(const QString &arg1)
{
    ui->tableView_depense->setModel(__D.sort(arg1));

}

void Finance::on_pdf_clicked()
{
    QTableView tableView_Revenue;
        QSqlQueryModel * Modal=new  QSqlQueryModel();

        QSqlQuery qry;
         qry.prepare("SELECT * FROM revenue");
         qry.exec();
         Modal->setQuery(qry);
      tableView_Revenue .setModel(Modal);






         QString strStream;
         QTextStream out(&strStream);

         const int rowCount =tableView_Revenue.model()->rowCount();
         const int columnCount = tableView_Revenue.model()->columnCount();

         const QString strTitle ="Document";


         out <<  "<html>\n"
             "<head>\n"
                 "<meta Content=\"Text/html; charset=Windows-1251\">\n"
             <<  QString("<title>%1</title>\n").arg(strTitle)
             <<  "</head>\n"
             "<body bgcolor=#ffffff link=#5000A0>\n"
            << QString("<h3 style=\" font-size: 32px; font-family: Arial, Helvetica, sans-serif; color: red ; font-weight: lighter; text-align: center;\">%1</h3>\n").arg("Tous les employes")
            <<"<br>"
             <<"<table border=1 cellspacing=0 cellpadding=2>\n";

         out << "<thead><tr bgcolor=#f0f0f0>";
         for (int column = 0; column < columnCount; column++)
             if (!tableView_Revenue.isColumnHidden(column))
                 out << QString("<th>%1</th>").arg(tableView_Revenue.model()->headerData(column, Qt::Horizontal).toString());
         out << "</tr></thead>\n";
         for (int row = 0; row < rowCount; row++) {
                 out << "<tr>";
                 for (int column = 0; column < columnCount; column++) {
                     if (!tableView_Revenue.isColumnHidden(column)) {
                         QString data = tableView_Revenue.model()->data(tableView_Revenue.model()->index(row, column)).toString().simplified();
                         out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                     }
                 }
                 out << "</tr>\n";
             }
             out <<  "</table>\n"
                     "<br><br>"


             "</body>\n"
             "</html>\n";

       QTextDocument *document = new QTextDocument();
         document->setHtml(strStream);

         QPrinter printer;

         QPrintDialog *dialog = new QPrintDialog(&printer, NULL);
         if (dialog->exec() == QDialog::Accepted) {
             document->print(&printer);
         }

         delete document;
    }






void Finance::on_export_2_clicked()
{
    {
        QString strStream;
                                  QTextStream out(&strStream);

                                  const int rowCount = ui->tableView_Revenue->model()->rowCount();
                                  const int columnCount = ui->tableView_Revenue->model()->columnCount();

                                  out <<  "<html>\n"
                                      "<head>\n"
                                      "<meta Content=\"Text/html; charset=Windows-1251\">\n"
                                      <<  QString("<title>%1</title>\n").arg("strTitle")
                                      <<  "</head>\n"
                                      "<body bgcolor=#ffffff link=#5000A0>\n"

                                     //     "<align='right'> " << datefich << "</align>"
                                      "<center> <H1>Liste des Poches </H1></br></br><table border=1 cellspacing=0 cellpadding=2>\n";

                                  // headers
                                  out << "<thead><tr bgcolor=#f0f0f0> <th>Numero</th>";
                                  for (int column = 0; column < columnCount; column++)
                                      if (!ui->tableView_depense->isColumnHidden(column))
                                          out << QString("<th>%1</th>").arg(ui->tableView_depense->model()->headerData(column, Qt::Horizontal).toString());
                                  out << "</tr></thead>\n";

                                  // data table
                                  for (int row = 0; row < rowCount; row++) {
                                      out << "<tr> <td bkcolor=0>" << row+1 <<"</td>";
                                      for (int column = 0; column < columnCount; column++) {
                                          if (!ui->tableView_Revenue->isColumnHidden(column)) {
                                              QString data = ui->tableView_Revenue->model()->data(ui->tableView_depense->model()->index(row, column)).toString().simplified();
                                              out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                                          }
                                      }
                                      out << "</tr>\n";
                                  }
                                  out <<  "</table> </center>\n"
                                      "</body>\n"
                                      "</html>\n";

                            QString fileName = QFileDialog::getSaveFileName((QWidget* )0, "Sauvegarder en PDF", QString(), "*.pdf");
                              if (QFileInfo(fileName).suffix().isEmpty()) { fileName.append(".pdf"); }

                             QPrinter printer (QPrinter::PrinterResolution);
                              printer.setOutputFormat(QPrinter::PdfFormat);
                             printer.setPaperSize(QPrinter::A4);
                            printer.setOutputFileName(fileName);

                             QTextDocument doc;
                              doc.setHtml(strStream);
                              doc.setPageSize(printer.pageRect().size()); // This is necessary if you want to hide the page number
                              doc.print(&printer);
    }
}

void Finance::on_excel_clicked()
{
    {
            QTableView *table;

                                    table = ui->tableView_Revenue;


                                    QString filters("Excel Files (.xls)");

                                    QString defaultFilter("Excel Files (*.xls)");

                                    QString fileName = QFileDialog::getSaveFileName(0, "Save file", QCoreApplication::applicationDirPath(),

                                                       filters, &defaultFilter);

                                    QFile file(fileName);


                                    QAbstractItemModel *model =  table->model();

                                    if (file.open(QFile::WriteOnly | QFile::Truncate)) {

                                        QTextStream data(&file);

                                        QStringList strList;

                                        for (int i = 0; i < model->columnCount(); i++) {

                                            if (model->headerData(i, Qt::Horizontal, Qt::DisplayRole).toString().length() > 0)

                                                strList.append("\"" + model->headerData(i, Qt::Horizontal, Qt::DisplayRole).toString() + "\"");

                                            else

                                                strList.append("");

                                        }

                                        data << strList.join(";") << "\n";

                                        for (int i = 0; i < model->rowCount(); i++) {

                                            strList.clear();

                                            for (int j = 0; j < model->columnCount(); j++) {


                                                if (model->data(model->index(i, j)).toString().length() > 0)

                                                    strList.append("\"" + model->data(model->index(i, j)).toString() + "\"");

                                                else

                                                    strList.append("");

                                            }

                                            data << strList.join(";") + "\n";

                                        }

                                        file.close();

                                        QMessageBox::information(nullptr, QObject::tr("Export excel"),

                                                                  QObject::tr("Export avec succes .\n"

                                                                              "Click OK to exit."), QMessageBox::Ok);
                    }

        }

}
