#include <vector>
#include <string>
#include <iostream>

#include "ConcreteFarmfactory.h"

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
}
