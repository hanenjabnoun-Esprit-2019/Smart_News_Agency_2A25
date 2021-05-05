#include "mainwindow.h"
#include "ui_mainwindow.h"
#include  "marketing.h"
#include "logistic.h"
#include "maintenance.h"
#include "finance.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->quickWidget->setSource(QUrl(QStringLiteral("qrc:/map.qml")));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_marketing_clicked()
{
    Marketing M;
    M.exec();

    M.show();
}

void MainWindow::on_pushButton_2_clicked()
{
    logistic l;
    l.exec();

    l.show();
}

void MainWindow::on_pushButton_4_clicked()
{
    maintenance M1;
    M1.exec();

    M1.show();
}

void MainWindow::on_pushButton_5_clicked()
{
   finance F;
   F.exec();
   F.show();
}
