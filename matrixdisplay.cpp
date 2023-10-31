#include "matrixdisplay.h"
#include "ui_matrixdisplay.h"

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
    int vari1;
    vari1 >> ui->lineEdit->text().toInt();
    ui->var1->setNum(vari1);
    ui->var2->setNum(this->Matrix.getArr(0,0));

}

