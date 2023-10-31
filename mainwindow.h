#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "equaloverload.h"
#include "equaloverloaddisplay.h"
#include "matrixdisplay.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    EqualOverloadDisplay* OverloadDisplay;
    MatrixDisplay* matrix;


private slots:
    void on_EqualOverload_clicked();

    void on_matrixOverload_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
