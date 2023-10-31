#include "equaloverloaddisplay.h"
#include "./ui_equaloverloaddisplay.h"

EqualOverloadDisplay::EqualOverloadDisplay(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EqualOverloadDisplay)
{
    ui->setupUi(this);
}

EqualOverloadDisplay::~EqualOverloadDisplay()
{
    delete ui;
}

void EqualOverloadDisplay::on_Check_clicked()
{
    this->equal1.setInput(ui->lineEdit->text());
    this->equal2.setInput(ui->lineEdit_2->text());
    if(equal1 == equal2){
        ui->label->setText("Euqal");
    }
    if(equal1 != equal2){
        ui->label->setText("NOT Euqal");
    }
}

