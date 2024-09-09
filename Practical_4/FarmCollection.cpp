#include "FarmCollection.h"
#include "BFT.h"
#include "DFT.h"
#include "TraversalStrategy.h"
#include <iostream>
using namespace std;

void FarmCollection::initializeBFT()
{
    traversalStrategy = new BFT();        // Create BFT strategy
    traversalStrategy->initialize(farms); // Initialize the strategy with farms
}

// Initialize Depth-First Traversal (DFT) strategy
void FarmCollection::initializeDFT()
{
    traversalStrategy = new DFT();        // Create DFT strategy
    traversalStrategy->initialize(farms); // Initialize the strategy with farms
}

// Traverse farms using the current strategy
void FarmCollection::traverseFarms()
{
    if (!traversalStrategy)
    {
        std::cerr << "Traversal strategy not initialized!" << std::endl;
        return;
    }

    // Start traversal
    Farm *firstFarm = traversalStrategy->firstFarm();
    if (firstFarm)
    {
        std::cout << "First farm: " << firstFarm->name << std::endl;
    }

    // Continue traversing until done
    while (!traversalStrategy->isDone())
    {
        Farm *farm = traversalStrategy->next();
        if (farm)
        {
            std::cout << "Visiting farm: " << farm->name << std::endl;
        }
    }
}

FarmCollection::~FarmCollection()
{

    for (Farm *farm : farms)
    {
        delete farm;
    }
}
