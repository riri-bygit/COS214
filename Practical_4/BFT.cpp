#include "BFT.h"
void BFT::initialize(std::vector<Farm *> &farms)
{
    for (auto &farm : farms)
    {
        farmQueue.push(farm);
    }
}
Farm *BFT::firstFarm()
{
    if (farmQueue.empty())
        return nullptr;
    return farmQueue.front(); // Peek the first element without removing it
}
Farm *BFT::next()
{
    if (farmQueue.empty())
        return nullptr;
    Farm *nextFarm = farmQueue.front();
    farmQueue.pop();
    return nextFarm;
}

bool BFT::isDone()
{
    return farmQueue.empty();
}

Farm *BFT::currentFarm()
{
    if (farmQueue.empty())
        return nullptr;
    return farmQueue.front(); // Peek the first element without removing it
}
