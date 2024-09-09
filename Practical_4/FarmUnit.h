#ifndef FARMUNIT_H
#define FARMUNIT_H
#include <iostream>
#include <vector>
#include "TraversalStrategy.h"
#include "SoilState.h"
class FarmUnit
{
public:
    virtual ~FarmUnit() = default;
    virtual int getTotalCapacity();
    virtual std::string getName();

    virtual void addUnit(FarmUnit *unit);

    virtual void removeUnit(FarmUnit *unit);

    virtual std::vector<FarmUnit *> getUnits();
    virtual void setSoilState(SoilState *state);
    virtual void setMoistureLevels(int lvl); // Initial moisture level
    virtual void setFertLevels(int lvl);
};

#endif
