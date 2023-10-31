#include "equaloverload.h"

EqualOverload::EqualOverload()
{

}

QString EqualOverload::getInput() { return input; }
void EqualOverload::setInput(QString newInput) {
    if (newInput == "А"){
        newInput = "A";
}else if(newInput == "О"){
    newInput = "O";
}else if(newInput == "І"){
    newInput = "I";
}else if(newInput == "Е"){
    newInput = "E";
}else if(newInput == "Н"){
    newInput = "H";
}else if(newInput == "С"){
    newInput = "C";
}else if(newInput == "В"){
    newInput = "B";
}else if(newInput == "К"){
    newInput = "K";
}else if(newInput == "Р"){
    newInput = "P";
}else if(newInput == "Х"){
    newInput = "X";
}else if(newInput == "Т"){
    newInput = "T";
}else if(newInput == "М"){
    newInput = "M";
}
input = newInput; }

