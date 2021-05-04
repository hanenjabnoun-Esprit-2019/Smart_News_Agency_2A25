#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "maintenance.h"
#include "finance.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_m_clicked()
{
    maintenance M;
    M.exec();

    M.show();
}
void MainWindow::on_pushButton_gestionf_clicked()
{
    Finance M;
    M.exec();

    M.show();
}
