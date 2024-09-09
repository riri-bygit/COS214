#ifndef DFT_H
#define DFT_H
#include "TraversalStrategy.h"
#include <stack>
#include <iostream>

class DFT : public TraversalStrategy
{
private:
    std::stack<Farm *> farmStack;

public:
    void initialize(std::vector<Farm *> &farms);

    Farm *firstFarm();
    Farm *next();

    bool isDone();
    Farm *currentFarm();
};

#endif
