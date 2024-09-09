#ifndef FARMUNIT_H
#define FARMUNIT_H
#include <iostream>
#include <vector>
#include "TraversalStrategy.h"
class FarmUnit
{
public:
    virtual ~FarmUnit() = default;
    virtual int getTotalCapacity() const = 0;
    virtual std::string getName() const = 0;

    virtual void addUnit(FarmUnit *unit) = 0;

    virtual void removeUnit(FarmUnit *unit) = 0;

    virtual std::vector<FarmUnit *> getUnits() const = 0;


};

#endif
