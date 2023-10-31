#include "prefixdecrementdisplay.h"
#include "ui_prefixdecrementdisplay.h"

PrefixDecrementDisplay::PrefixDecrementDisplay(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PrefixDecrementDisplay)
{
    ui->setupUi(this);
}

PrefixDecrementDisplay::~PrefixDecrementDisplay()
{
    delete ui;
}

void PrefixDecrementDisplay::on_check_clicked()
{
    this->decrement.setVector(ui->Start->text().toInt(), 0);
    this->decrement.setVector(ui->End->text().toInt(), 1);

    --decrement;

    ui->newStart->setText("New Start: " + QString::number(this->decrement.getVector(0)));
    ui->newEnd->setText("New End: " + QString::number(this->decrement.getVector(1)));
}

