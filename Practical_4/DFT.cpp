#include "DFT.h"

void DFT::initialize(std::vector<Farm *> &farms)
{
    while (!farmStack.empty())
        farmStack.pop(); // Clear previous data
    for (auto &farm : farms)
    {
        farmStack.push(farm);
    }
}

Farm *DFT::next()
{
    if (farmStack.empty())
        return nullptr;
    Farm *nextFarm = farmStack.top();
    farmStack.pop();
    return nextFarm;
}

bool DFT::isDone()
{
    return farmStack.empty();
}

Farm *DFT::firstFarm()
{
    if (farmStack.empty())
        return nullptr;
    return farmStack.top(); // Peek the first element without removing it
}

Farm *DFT::currentFarm()
{
    if (farmStack.empty())
        return nullptr;
    return farmStack.top(); // Peek the first element without removing it
}
