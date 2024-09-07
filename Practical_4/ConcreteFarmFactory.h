#ifndef CONCRETEFARM_H
#define CONCRETEFARM_H

#include <vector>
#include <string>
#include <iostream>
#include "FarmFactory.h"
#include "FarmUnit.h"

class ConcreteFarm : public FarmFactory
{

public:
   FarmUnit *createFarmUnit(string type) {}
};

#endif