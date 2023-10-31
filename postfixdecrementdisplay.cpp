#include "postfixdecrementdisplay.h"
#include "ui_postfixdecrementdisplay.h"

PostfixDecrementDisplay::PostfixDecrementDisplay(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PostfixDecrementDisplay)
{
    ui->setupUi(this);
}

PostfixDecrementDisplay::~PostfixDecrementDisplay()
{
    delete ui;
}

void PostfixDecrementDisplay::on_check_clicked()
{
    this->decrement.setVector(ui->Start->text().toInt(), 0);
    this->decrement.setVector(ui->End->text().toInt(), 1);

    decrement--;

    ui->newStart->setText("New Start: " + QString::number(this->decrement.getVector(0)));
    ui->newEnd->setText("New End: " + QString::number(this->decrement.getVector(1)));
}

