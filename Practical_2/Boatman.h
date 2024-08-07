#ifndef Boatman_h
#define Boatman_h

#include "Soldiers.h"

#include <vector>
#include <string>
#include <iostream>
#include <map>

using namespace std;

class Boatman : public Soldiers
{
public:
    
    Soldiers* clonis();
    void engage();
    void disengage();
    ~Boatman();

private:
    int healthPerSoldier;
    int damagePerSoldier;
    int defencePerSoldier;
    int amountOfSoldiersPerUnit;
    std:: string unitName;
    void prepare();
    void execute();
    void retreat();
    void rest();
};

#endif