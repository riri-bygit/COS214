#ifndef BARN_H
#define BARN_H
#include "FarmUnit.h"
class Barn : public FarmUnit
{
private:
    int size;
    int capacity;

public:
    int getCapacity();
};

#endif
