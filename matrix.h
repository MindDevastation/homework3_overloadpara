#ifndef MATRIX_H
#define MATRIX_H


class matrix
{
    int arr[2][2] {};
    int data[4];
public:
    int i = 0, k = 0, inp = 0;
    matrix();
    int getArr(int point);
    //int getArr1(int point);
    void setArr(int data);

    void convertArr();

    friend void operator << (matrix& inp, int data){
        inp.setArr(data);
    }

    friend int operator >> (matrix& inp, int point){
        int variable = inp.getArr(point);
        return variable;
    }
};

#endif // MATRIX_H
