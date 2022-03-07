#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <jogo.h>
#include <QMessageBox>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonAB_clicked();

    void on_pushButtonAC_clicked();

    void on_pushButtonBA_clicked();

    void on_pushButtonBC_clicked();

    void on_pushButtonCA_clicked();

    void on_pushButtonCB_clicked();

    void on_pushButtonCriarJogo_clicked();

private:
    Ui::MainWindow *ui;
    minhaNamespace::Jogo *jogo;
};
#endif // MAINWINDOW_H
