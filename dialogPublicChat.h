#ifndef DIALOGPUBLICCHAT_H
#define DIALOGPUBLICCHAT_H

#include <QDialog>

namespace Ui {
class DialogPublicChat;
}

class DialogPublicChat : public QDialog
{
    Q_OBJECT

public:
    explicit DialogPublicChat(QWidget *parent = nullptr);
    ~DialogPublicChat();

private:
    Ui::DialogPublicChat *ui;
};

#endif // DIALOGPUBLICCHAT_H
