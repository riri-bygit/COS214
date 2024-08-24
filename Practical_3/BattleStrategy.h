#ifndef BATTLESTRATEGY_H
#define BATTLESTRATEGY_H

#include <string>
using namespace std;

class BattleStrategy
{

public:
    virtual void excute() = 0;
    virtual ~BattleStrategy() = default;
};

#endif