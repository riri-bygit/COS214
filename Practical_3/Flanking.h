#ifndef Flanking_H
#define Flanking_H

#include <iostream>
#include <string>
#include "BattleStrategy.h"
using namespace std;

class Flanking : public BattleStrategy
{
public:
    void execute();
};

void Flanking::execute()
{
    cout << "FLANKING FLANKING!" << endl;
}
#endif
