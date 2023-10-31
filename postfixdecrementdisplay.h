#ifndef POSTFIXDECREMENTDISPLAY_H
#define POSTFIXDECREMENTDISPLAY_H

#include <QDialog>
#include "postfixdecrement.h"

namespace Ui {
class PostfixDecrementDisplay;
}

class PostfixDecrementDisplay : public QDialog
{
    Q_OBJECT

public:
    explicit PostfixDecrementDisplay(QWidget *parent = nullptr);
    ~PostfixDecrementDisplay();
    PostfixDecrement decrement;

private slots:
    void on_check_clicked();

private:
    Ui::PostfixDecrementDisplay *ui;
};

#endif // POSTFIXDECREMENTDISPLAY_H
