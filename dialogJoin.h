#ifndef DIALOGJOIN_H
#define DIALOGJOIN_H

#include <QDialog>

namespace Ui {
class DialogJoin;
}

class DialogJoin : public QDialog
{
    Q_OBJECT

public:
    explicit DialogJoin(QWidget *parent = nullptr);
    ~DialogJoin();

private:
    Ui::DialogJoin *ui;
};

#endif // DIALOGJOIN_H
