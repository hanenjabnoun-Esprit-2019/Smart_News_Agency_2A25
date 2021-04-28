#ifndef GESTION_MAINTENANCE_H
#define GESTION_MAINTENANCE_H

#include <QWidget>

namespace Ui {
class gestion_maintenance;
}

class gestion_maintenance : public QWidget
{
    Q_OBJECT

public:
    explicit gestion_maintenance(QWidget *parent = nullptr);
    ~gestion_maintenance();

private:
    Ui::gestion_maintenance *ui;
};

#endif // GESTION_MAINTENANCE_H
