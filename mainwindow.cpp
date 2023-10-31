#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    OverloadDisplay = new EqualOverloadDisplay(this);
    matrix = new class MatrixDisplay(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_EqualOverload_clicked()
{
    OverloadDisplay -> show();
}


void MainWindow::on_matrixOverload_clicked()
{
    matrix -> show();
}

