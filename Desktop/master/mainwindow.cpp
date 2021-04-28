#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "maintenance.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_maintenance_clicked()
{
    Maintenance1 M;
    M.exec();

    M.show();
}
