#ifndef Fortification_H
#define Fortification_H

#include <iostream>
#include <string>
#include "BattleStrategy.h"
using namespace std;

class Fortification : public BattleStrategy
{
public:
    void execute();
};

void Fortification::execute()
{
    cout << "FORTIFICATING FORTIFICATING!" << endl;
}
#endif
