#ifndef TRACTOR_H
#define TRACTOR_H

#include "FarmUnit.h"
#include "SoilState.h"

class Tractor : public FarmUnit
{
private:
    int size;

public:
    void plowing(SoilState *state);
    ~Tractor();
};



#endif