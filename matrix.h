#ifndef MATRIX_H
#define MATRIX_H


class matrix
{
    int arr[2][2];
public:
    matrix();
    int getArr(int col, int row){return arr[col][row];}
    void setArr(int data){for(int i = 0; i < 2 ; i++){
            for(int k = 0; k < 2; k++){
                arr[i][k] = data;
            }
        }
    }

    friend void operator >> (matrix& inp, int data){
        inp.setArr(data);
    }

    friend void operator << (matrix& inp, int* arr){
        for(int i = 0; i <  2; i++){
            for(int k = 0; k < 2; k++){

            }
        }
    }
};

#endif // MATRIX_H
