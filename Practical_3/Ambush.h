#ifndef AMBUSH_H
#define AMBUSH_H

#include <iostream>
#include <string>
#include "BattleStrategy.h"
using namespace std;

class Ambush : public BattleStrategy
{
public:
    void execute();
};

void Ambush::execute()
{
    cout << "AMBUSHING AMBUSHING!" << endl;
}
#endif
