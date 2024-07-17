#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug() << QSqlDatabase::drivers();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionOpen_chat_triggered()
{

}


void MainWindow::on_actionClose_this_chat_triggered()
{

}


void MainWindow::on_all_chatButton_clicked()
{

}


void MainWindow::on_registrationButton_clicked()
{
    DialogRegistration reg;
    reg.setModal(1);
    reg.exec();
}


void MainWindow::on_joinButton_clicked()
{

}

void MainWindow::setRegistrationForm()
{

}

void MainWindow::setJoinForm()
{

}

