#include "matrix.h"

matrix::matrix()
{

}

int matrix::getArr(int point){return data[point];}
//int matrix::getArr1(int point){return arr[point][point];}
void matrix::setArr(int data){
    this->data[inp] = data;
    inp++;
}

void matrix::convertArr(){
    int m = 0;
    for(int i = 0; i < 2; i++){
        for(int k = 0; k < 2; k++){
            arr[i][k] = data [m];
            m++;
        }
    }
}
