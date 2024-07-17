#include "dialogPrivatMessage.h"
#include "ui_dialogPrivatMessage.h"

DialogPrivatMessage::DialogPrivatMessage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogPrivatMessage)
{
    ui->setupUi(this);
}

DialogPrivatMessage::~DialogPrivatMessage()
{
    delete ui;
}
