#ifndef PREFIXDECREMENTDISPLAY_H
#define PREFIXDECREMENTDISPLAY_H

#include <QDialog>
#include "prefixdecrement.h"

namespace Ui {
class PrefixDecrementDisplay;
}

class PrefixDecrementDisplay : public QDialog
{
    Q_OBJECT

public:
    explicit PrefixDecrementDisplay(QWidget *parent = nullptr);
    ~PrefixDecrementDisplay();
    PrefixDecrement decrement;

private slots:
    void on_check_clicked();

private:
    Ui::PrefixDecrementDisplay *ui;
};

#endif // PREFIXDECREMENTDISPLAY_H
