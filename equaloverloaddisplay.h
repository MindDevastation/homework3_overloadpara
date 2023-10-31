#ifndef EQUALOVERLOADDISPLAY_H
#define EQUALOVERLOADDISPLAY_H

#include <QDialog>
#include <iostream>
#include <stdlib.h>
#include <QString>
#include "equaloverload.h"

namespace Ui {
class EqualOverloadDisplay;
}

class EqualOverloadDisplay : public QDialog
{
    Q_OBJECT

public:
    explicit EqualOverloadDisplay(QWidget *parent = nullptr);
    ~EqualOverloadDisplay();
    EqualOverload equal1;
    EqualOverload equal2;

private slots:
    void on_Check_clicked();

private:
    Ui::EqualOverloadDisplay *ui;
};

#endif // EQUALOVERLOADDISPLAY_H
