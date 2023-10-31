#include "postfixdecrement.h"

PostfixDecrement::PostfixDecrement()
{

}


int PostfixDecrement::getVector(int point){return vector[point];}
void PostfixDecrement::setVector(int value, int point){vector[point] = value;}

PostfixDecrement& PostfixDecrement::operator -- (int){
    PostfixDecrement temp(*this);

    this->setVector(this->getVector(0) - 1 , 0);
    this->setVector(this->getVector(1) - 1 , 1);

    return temp;
}
