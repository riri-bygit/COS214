
#include <iostream>
#include "ConcreteFarmFactory.h"
using namespace std;

FarmUnit *ConcreteFarmFactory::createFarmUnit(string type)
{
    if (type == "CropField")
    {
        return new CropField;
    }
    else if (type == "Barn")
    {
        return new Barn;
    }

    return nullptr;
};
