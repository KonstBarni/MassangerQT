#include "dialogRegistration.h"
#include "ui_dialogRegistration.h"

DialogRegistration::DialogRegistration(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogRegistration)
{
    ui->setupUi(this);
}

DialogRegistration::~DialogRegistration()
{
    delete ui;
}

void DialogRegistration::on_pushButtonRegistration_clicked()
{

}

