#ifndef FarmFactory_H
#define FarmFactory_H

#include "FarmUnit.h"
class FarmFactory
{
public:
   virtual FarmUnit* createFarmUnit(string type) = 0;
   virtual ~FarmFactory()  ;
};

#endif
