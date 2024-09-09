#ifndef BFT_H
#define BFT_H
#include "TraversalStrategy.h"
#include <queue>

class BFT : public TraversalStrategy
{
private:
    std::queue<Farm *> farmQueue;

public:
    void initialize(std::vector<Farm *> &farms);

    Farm *firstFarm();
    Farm *next();

    bool isDone();
    Farm *currentFarm();
    
};

#endif
