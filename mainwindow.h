#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<QString>
#include<llde.h>
#include<QMessageBox>
#include <QMainWindow>

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
    void on_pushButtonInserirInicio_clicked();

    void on_pushButtonAcessarInicio_clicked();

    void on_pushButtonRetirarInicio_clicked();

    void on_pushButtonInserirFim_clicked();

    void on_pushButtonAcessarFim_clicked();

    void on_pushButtonRetirarFim_clicked();

    void on_pushButtonInserirPosicao_clicked();

    void on_pushButtonAcessarPosicao_clicked();

    void on_pushButtonRetirarPosicao_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    adf::LLDE list;
};
#endif // MAINWINDOW_H
