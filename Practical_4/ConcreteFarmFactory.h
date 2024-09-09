#ifndef CONCRETEFARMFACTORY_H
#define CONCRETEFARMFACTORY_H

#include <vector>
#include <string>
#include <iostream>
#include "FarmFactory.h"
#include "FarmUnit.h"

class ConcreteFarmFactory : public FarmFactory
{

public:
   FarmUnit *createFarmUnit(string type) override;
};

#endif