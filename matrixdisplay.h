#ifndef MATRIXDISPLAY_H
#define MATRIXDISPLAY_H

#include <QDialog>
#include "matrix.h"

namespace Ui {
class MatrixDisplay;
}

class MatrixDisplay : public QDialog
{
    Q_OBJECT

public:
    explicit MatrixDisplay(QWidget *parent = nullptr);
    ~MatrixDisplay();
    matrix Matrix;

private slots:
    void on_check_clicked();

    void on_Add_clicked();

private:
    Ui::MatrixDisplay *ui;
};

#endif // MATRIXDISPLAY_H
