#include "Farm.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;

Farm::Farm(const string &farmName) : name(farmName) {}

int Farm::getTotalCapacity()
{
    int totalCapacity = 0;
    for (auto &unit : units)
    {
        totalCapacity += unit->getTotalCapacity();
    }
    return totalCapacity;
}

void Farm::addUnit(FarmUnit *unit)
{
    units.push_back(unit);
};

void Farm::removeUnit(FarmUnit *unit)
{
    units.erase(std::remove(units.begin(), units.end(), unit), units.end());
};

void Farm::traverse(TraversalStrategy *strategy)
{
    strategy->traverse(units);
}

std::string Farm::getName() const
{
    return name;
}

Farm::~Farm()
{
    for (auto &unit : units)
    {
        delete unit;
    }
}