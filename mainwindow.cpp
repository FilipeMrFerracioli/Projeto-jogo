#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEditQuantidadeJogadas->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonAB_clicked()
{

}


void MainWindow::on_pushButtonAC_clicked()
{

}


void MainWindow::on_pushButtonBA_clicked()
{

}


void MainWindow::on_pushButtonBC_clicked()
{

}


void MainWindow::on_pushButtonCA_clicked()
{

}


void MainWindow::on_pushButtonCB_clicked()
{

}

