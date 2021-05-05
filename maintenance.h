#ifndef MAINTENANCE_H
#define MAINTENANCE_H
#include "equipement.h"
#include <QDialog>
#include <QtMultimedia/QSound>
#include <QMediaPlayer>
#include <QDialog>

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
    void on_ajouter_equipement_clicked();

    void on_equipement_clicked();

    void on_maintenance_3_clicked();

    void on_pushButton_updateequip_clicked();

    void on_pb_supprimer_clicked();

    void on_pb_trier_clicked();

    void on_filtrer_clicked();

    void on_pushButton_play_clicked();

    void on_pushButton_mute_clicked();

    void on_ajout_maintenance_clicked();

    void on_edit_mainten_clicked();

    void on_export_pdf_clicked();

    void on_supprimer_ma_clicked();

private:
    Ui::maintenance *ui;
    QSound *sound;
};

#endif // MAINTENANCE_H
