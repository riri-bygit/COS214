#ifndef ShieldBearer_h
#define ShieldBearer_h
#include "Soldiers.h"
#include <iostream>
using namespace std;

class ShieldBearer : public Soldiers
{
public:
    // ShieldBearer() : Soldiers(100, 50, 75, 10, "ShieldBearer") {}
    Soldiers* clonis();
    void engage();
    void disengage();
    ~ShieldBearer();

private:
    int healthPerSoldier;
    int damagePerSoldier;
    int defencePerSoldier;
    int amountOfSoldiersPerUnit;
    std::string unitName;
    void prepare();
    void execute();
    void retreat();
    void rest();
};

#endif