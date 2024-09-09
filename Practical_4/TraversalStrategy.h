#ifndef TraversalStrategy_H
#define TraversalStrategy_H
#include <iostream>
#include <vector>
#include "Farm.h"

class TraversalStrategy {
public:
    virtual ~TraversalStrategy() = default;
    virtual Farm* firstFarm() = 0;
    virtual Farm* next() = 0;
    virtual bool isDone() const = 0;
    virtual Farm* currentFarm() const = 0;
    virtual void initialize(std::vector<Farm *> &farms) = 0;
    virtual void traverseFarms();
};

#endif
