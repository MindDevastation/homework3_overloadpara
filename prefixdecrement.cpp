#include "prefixdecrement.h"

PrefixDecrement::PrefixDecrement()
{

}

int PrefixDecrement::getVector(int point){return vector[point];}
void PrefixDecrement::setVector(int value, int point){vector[point] = value;}

PrefixDecrement& PrefixDecrement::operator -- (){
    this->setVector(this->getVector(0) - 1 , 0);
    this->setVector(this->getVector(1) - 1 , 1);

    return *this;
}
