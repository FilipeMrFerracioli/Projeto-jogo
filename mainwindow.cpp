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
    try {
        jogo->jogadaAB();
        ui->lineEditQuantidadeJogadas->setText(QString::number(jogo->getQuantidadeJogadas()));
    }  catch (QString &erro) {
        QMessageBox::information(this, "Erro", erro);
    }
}


void MainWindow::on_pushButtonAC_clicked()
{
    try {
        jogo->jogadaAC();
        ui->lineEditQuantidadeJogadas->setText(QString::number(jogo->getQuantidadeJogadas()));
    }  catch (QString &erro) {
        QMessageBox::information(this, "Erro", erro);
    }
}


void MainWindow::on_pushButtonBA_clicked()
{
    try {
        jogo->jogadaBA();
        ui->lineEditQuantidadeJogadas->setText(QString::number(jogo->getQuantidadeJogadas()));
    }  catch (QString &erro) {
        QMessageBox::information(this, "Erro", erro);
    }
}


void MainWindow::on_pushButtonBC_clicked()
{
    try {
        jogo->jogadaBC();
        ui->lineEditQuantidadeJogadas->setText(QString::number(jogo->getQuantidadeJogadas()));
    }  catch (QString &erro) {
        QMessageBox::information(this, "Erro", erro);
    }
}


void MainWindow::on_pushButtonCA_clicked()
{
    try {
        jogo->jogadaCA();
        ui->lineEditQuantidadeJogadas->setText(QString::number(jogo->getQuantidadeJogadas()));
    }  catch (QString &erro) {
        QMessageBox::information(this, "Erro", erro);
    }
}


void MainWindow::on_pushButtonCB_clicked()
{
    try {
        jogo->jogadaCB();
        ui->lineEditQuantidadeJogadas->setText(QString::number(jogo->getQuantidadeJogadas()));
    }  catch (QString &erro) {
        QMessageBox::information(this, "Erro", erro);
    }
}


void MainWindow::on_pushButtonCriarJogo_clicked()
{
    try {

    }  catch (QString &erro) {
        QMessageBox::information(this, "Erro", erro);
    }
}

