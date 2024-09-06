#include <vector>
#include <string>
#include <iostream>

#include "SpecificFarm.h"

FarmUnit *SpecificFarm::createFarmUnit(string type)
{
    if (type == "CropField")
    {
        return new CropField;
    }
    else if (type == "Barn")
    {
        return new Barn;
    }
    // Add more FarmUnit types as needed
    return nullptr;
}
