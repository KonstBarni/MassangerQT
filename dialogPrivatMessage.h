#ifndef DIALOGPRIVATMESSAGE_H
#define DIALOGPRIVATMESSAGE_H

#include <QDialog>

namespace Ui {
class DialogPrivatMessage;
}

class DialogPrivatMessage : public QDialog
{
    Q_OBJECT

public:
    explicit DialogPrivatMessage(QWidget *parent = nullptr);
    ~DialogPrivatMessage();

private:
    Ui::DialogPrivatMessage *ui;
};

#endif // DIALOGPRIVATMESSAGE_H
