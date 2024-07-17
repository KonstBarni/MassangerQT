#include "dialogPublicChat.h"
#include "ui_dialogPublicChat.h"

DialogPublicChat::DialogPublicChat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogPublicChat)
{
    ui->setupUi(this);
}

DialogPublicChat::~DialogPublicChat()
{
    delete ui;
}
