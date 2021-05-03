#ifndef MAINTENANCE_H
#define MAINTENANCE_H
#include "equipement.h"
#include <QDialog>
#include <QtMultimedia/QSound>
#include <QMediaPlayer>

namespace Ui {
class maintenance;
}

class maintenance : public QDialog
{
    Q_OBJECT

public:
    explicit maintenance(QWidget *parent = nullptr);
    ~maintenance();

private slots:
    void on_pb_ajouter_clicked();

    void on_pb_supprimer_clicked();

    void on_pushButton_maintenance_clicked();

    void on_pushButton_equipement_clicked();

    void on_pushButton_updateequip_clicked();

    void on_pb_ajouterm_clicked();


    void on_pb_supprimerm_clicked();

    void on_pb_updatem_clicked();

    void on_pb_trier_clicked();

    void on_pushButton_7_clicked();

    void on_rechercheav_cursorPositionChanged(int arg1, int arg2);

    void on_filtrer_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::maintenance *ui;
    QSound *sound;

};

#endif // MAINTENANCE_H
