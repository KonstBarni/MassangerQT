#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql/QSqlDatabase>
#include <QDebug>
#include "dialogRegistration.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void setRegistrationForm();
    void setJoinForm();
    ~MainWindow();

private slots:

    void on_actionOpen_chat_triggered();
    void on_actionClose_this_chat_triggered();
    void on_all_chatButton_clicked();
    void on_registrationButton_clicked();
    void on_joinButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
