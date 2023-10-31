#ifndef PREFIXDECREMENT_H
#define PREFIXDECREMENT_H


class PrefixDecrement
{
    int vector[2];
public:
    PrefixDecrement();
    int getVector(int point);
    void setVector(int value, int point);

    PrefixDecrement& operator -- ();
};

#endif // PREFIXDECREMENT_H
