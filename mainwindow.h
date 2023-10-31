#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "equaloverload.h"
#include "equaloverloaddisplay.h"
#include "matrixdisplay.h"
#include "prefixdecrementdisplay.h"
#include "postfixdecrementdisplay.h"

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
    PrefixDecrementDisplay* prefixDecrement;
    PostfixDecrementDisplay* postfixDecrement;


private slots:
    void on_EqualOverload_clicked();

    void on_matrixOverload_clicked();

    void on_prefixDecr_clicked();

    void on_postfixOverload_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
