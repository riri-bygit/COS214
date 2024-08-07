#ifndef Infantry_h
#define Infantry_h

#include "Soldiers.h"

#include <vector>
#include <string>
#include <iostream>
#include <map>
#include <list>

using namespace std;

class Infantry : public Soldiers
{
public:
//     Infantry() : Soldiers(100, 50, 75, 10, "Infantry") {}
     Soldiers* clonis();
     void engage();
     void disengage();
     ~Infantry();

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