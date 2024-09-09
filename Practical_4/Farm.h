#ifndef FARM_H
#define FARM_H

#include <vector>
#include <string>
#include <iostream>
#include "FarmUnit.h"

class Farm : public FarmUnit
{
private:
    std::string name;
    std::vector<FarmUnit *> units;

public:
    Farm(const std::string &farmName);

    virtual int getTotalCapacity();

    virtual void addUnit(FarmUnit *unit);

    virtual void removeUnit(FarmUnit *unit);

    std::string getName() const;

    ~Farm();
};

#endif