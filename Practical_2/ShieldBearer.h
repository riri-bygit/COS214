#ifndef ShieldBearer_h
#define ShieldBearer_h

#include "Soldiers.h"

#include <vector>
#include <string>
#include <iostream>
#include <map>
#include <list>

using namespace std;

class ShieldBearer : public Soldiers
{
public:
    Soldiers *clonis();
    void engage();
    void disengage();
    ~ShieldBearer();

private:
    int healthPerSoldier;
    int damagePerSoldier;
    int defencePerSoldier;
    int amountOfSoldiersPerUnit;
    string unitName;
    void prepare();
    void execute();
    void retreat();
    void rest();
};

#endif