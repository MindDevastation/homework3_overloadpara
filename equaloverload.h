#ifndef EQUALOVERLOAD_H
#define EQUALOVERLOAD_H


#include <iostream>
#include <stdlib.h>
#include <QString>

class EqualOverload
{
    QString input;
public:
    EqualOverload();
    QString getInput();
    void setInput(QString newInput);

    friend bool operator == (EqualOverload& inp, EqualOverload& inp2) {
        return (inp.getInput() == inp2.getInput());
    }

    friend bool operator != (EqualOverload& inp, EqualOverload& inp2) {
        return !(inp == inp2);
    }
};

#endif // EQUALOVERLOAD_H
