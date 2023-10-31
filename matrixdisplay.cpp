#include "matrixdisplay.h"
#include "ui_matrixdisplay.h"
#include <QString>

MatrixDisplay::MatrixDisplay(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MatrixDisplay)
{
    ui->setupUi(this);
}

MatrixDisplay::~MatrixDisplay()
{
    delete ui;
}

void MatrixDisplay::on_check_clicked()
{
    //this->Matrix.convertArr();
    ui->var1->setNum(Matrix >> 0);
    ui->var2->setNum(Matrix >> 1);
    ui->var3->setNum(Matrix >> 2);
    ui->var4->setNum(Matrix >> 3);

}


void MatrixDisplay::on_Add_clicked()
{
    if(this->Matrix.inp >= 3){
        ui->Add->setEnabled(false);
    }
    Matrix << ui->lineEdit->text().toInt();
        ui->lineEdit->clear();

}

