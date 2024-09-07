#ifndef SPECIFICFARM_H
#define SPECIFICFARM_H

#include <vector>
#include <string>
#include <iostream>
#include "Farm.h"
#include "FarmUnit.h"

using namespace std;
class FarmFactory
{
public:
    virtual ~FarmFactory() = default;
    virtual FarmUnit createFarm() = 0;
    virtual FarmUnit createFarmUnit(const std::string &type) = 0;
};

#endif