#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEditValor->setFocus();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonInserirInicio_clicked()
{
    try {
        bool ok;
        int number=ui->lineEditValor->text().toInt(&ok);
        if(!ok) throw QString("Invalid input");

        list.insertFirst(number);
        ui->textEdit->setText(list.accessAll());
        ui->lineEditQtd->setText(QString::number(list.getnumberElements()));
        ui->lineEditValor->setFocus();
        ui->lineEditValor->clear();

    } catch (QString &erro) {
        QMessageBox::warning(this,"ERRO",erro);
    }
}

void MainWindow::on_pushButtonInserirFim_clicked()
{
    try {
        bool ok;
        int number=ui->lineEditValor->text().toInt(&ok);
        if(!ok) throw QString("Invalid input");

        list.insertLast(number);
        ui->textEdit->setText(list.accessAll()); 
        ui->lineEditQtd->setText(QString::number(list.getnumberElements()));
        ui->lineEditValor->setFocus();
        ui->lineEditValor->clear();

    } catch (QString &erro) {
        QMessageBox::warning(this,"ERRO",erro);
    }
}

void MainWindow::on_pushButtonInserirPosicao_clicked()
{
    try {
        bool ok,ok2;
        int number=ui->lineEditValor->text().toInt(&ok);
        int posicao=ui->lineEditPosicao->text().toInt(&ok2);
        if(!ok || !ok2) throw QString("Invalid input");

        list.insertPosition(number,posicao);
        ui->textEdit->setText(list.accessAll());
        ui->lineEditQtd->setText(QString::number(list.getnumberElements()));
        ui->lineEditValor->setFocus();
        ui->lineEditValor->clear();

    } catch (QString &erro) {
        QMessageBox::warning(this,"ERRO",erro);
    }
}
void MainWindow::on_pushButton_clicked()
{
    try {
        bool ok;
        int number=ui->lineEditValor->text().toInt(&ok);
        if(!ok) throw QString("Invalid input");

        list.insertOrder(number);
        ui->textEdit->setText(list.accessAll());
        ui->lineEditQtd->setText(QString::number(list.getnumberElements()));
        ui->lineEditValor->setFocus();
        ui->lineEditValor->clear();

    } catch (QString &erro) {
        QMessageBox::warning(this,"ERRO",erro);
    }
}


void MainWindow::on_pushButtonAcessarInicio_clicked()
{
    try {
        ui->lineEditValor->setText(QString::number(list.accessFirst()));
        ui->lineEditQtd->setText(QString::number(list.getnumberElements()));

        ui->lineEditValor->setFocus();
    } catch (QString &erro) {
        QMessageBox::warning(this,"ERRO",erro);
    }
}

void MainWindow::on_pushButtonAcessarFim_clicked()
{
    try {
        ui->lineEditValor->setText(QString::number(list.accessLast()));
        ui->lineEditQtd->setText(QString::number(list.getnumberElements()));

        ui->lineEditValor->setFocus();
    } catch (QString &erro) {
        QMessageBox::warning(this,"ERRO",erro);
    }
}

void MainWindow::on_pushButtonAcessarPosicao_clicked()
{
    try {
        bool ok;
       int posicao=ui->lineEditPosicao->text().toInt(&ok);
        if(!ok ) throw QString("Posicao invalida");


        ui->lineEditValor->setText(QString::number(list.accessPosition(posicao)));
        ui->lineEditQtd->setText(QString::number(list.getnumberElements()));

        ui->lineEditValor->setFocus();
    }catch (QString &erro) {
        QMessageBox::warning(this,"ERRO",erro);
    }


}


void MainWindow::on_pushButtonRetirarInicio_clicked()
{
    try {


        ui->lineEditValor->setText(QString::number(list.removeFirst()));
        if(list.isEmpty()){
            QString exit="||";
            ui->textEdit->setText(exit);
        }else{
             ui->textEdit->setText(list.accessAll());
        }
        ui->lineEditQtd->setText(QString::number(list.getnumberElements()));
        ui->lineEditValor->setFocus();

    }  catch (QString &erro) {
    QMessageBox::warning(this,"ERRO",erro);
    }
}







void MainWindow::on_pushButtonRetirarFim_clicked()
{
    try {

        ui->lineEditValor->setText(QString::number(list.removeLast()));
        if(list.isEmpty()){
            QString exit="||";
            ui->textEdit->setText(exit);
        }else{
             ui->textEdit->setText(list.accessAll());
        }
        ui->lineEditQtd->setText(QString::number(list.getnumberElements()));

        ui->lineEditValor->setFocus();

    }  catch (QString &erro) {
    QMessageBox::warning(this,"ERRO",erro);
    }
}





void MainWindow::on_pushButtonRetirarPosicao_clicked()
{
    try {
        bool ok;
       int posicao=ui->lineEditPosicao->text().toInt(&ok);
        if(!ok ) throw QString("Posicao invalida");

        ui->lineEditValor->setText(QString::number(list.removePosition(posicao)));
        if(list.isEmpty()){
            QString exit="||";
            ui->textEdit->setText(exit);
        }else{
             ui->textEdit->setText(list.accessAll());
        }
        ui->lineEditQtd->setText(QString::number(list.getnumberElements()));

        ui->lineEditValor->setFocus();

    }  catch (QString &erro) {
    QMessageBox::warning(this,"ERRO",erro);
    }
}



