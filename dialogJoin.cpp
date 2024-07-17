#include "dialogJoin.h"
#include "ui_dialogJoin.h"

DialogJoin::DialogJoin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogJoin)
{
    ui->setupUi(this);
}

DialogJoin::~DialogJoin()
{
    delete ui;
}
