#ifndef FarmFactory_H
#define FarmFactory_H

#include "FarmUnit.h"
class FarmFactory
{
public:
   FarmUnit* createFarm() = 0;
   virtual ~FarmFactory()  ;
};

#endif
