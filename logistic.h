#ifndef LOGISTIC_H
#define LOGISTIC_H
#include "studio.h"
#include <QDialog>
#include "programme.h"
namespace Ui {
class logistic;
}

class logistic : public QDialog
{
    Q_OBJECT

public:
    explicit logistic(QWidget *parent = nullptr);
    ~logistic();

private slots:
    void on_ajout_studio_clicked();

    void on_tableView_studio_doubleClicked(const QModelIndex &index);

    void on_modifier_studio_clicked();

    void on_supprimer_studio_clicked();

    void on_studio_clicked();

    void on_programme_clicked();

    void on_ajouter_prog_clicked();

    void on_tableView_prog_doubleClicked(const QModelIndex &index);

    void on_PDF_clicked();

    void on_supprimer_prog_clicked();

    void on_afficher_prog_clicked();

    void on_modifier_prog_clicked();

private:
    Ui::logistic *ui;
    STUDIO tmpSTUDIO;
    PROGRAMME tmpPromgrame;
};

#endif // LOGISTIC_H
