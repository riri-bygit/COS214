#ifndef FARMCOLLECTION_H
#define FARMCOLLECTION_H
#include <vector>
#include "FarmUnit.h"
#include "Farm.h"
#include "TraversalStrategy.h"
class FarmCollection 
{
private:
    std::vector<Farm *> farms;
    TraversalStrategy *traversalStrategy;

public:
    void addFarm(Farm *farm);
    void traverseFarms();
    ~FarmCollection();
    void initializeBFT();
    void initializeDFT();
};

#endif
