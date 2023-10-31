#ifndef POSTFIXDECREMENT_H
#define POSTFIXDECREMENT_H


class PostfixDecrement
{
    int vector[2];
public:
    PostfixDecrement();
    int getVector(int point);
    void setVector(int value, int point);

    PostfixDecrement& operator -- (int);
};

#endif // POSTFIXDECREMENT_H
