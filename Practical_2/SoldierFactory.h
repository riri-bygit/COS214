#ifndef SoldierFactory_h
#define SoldierFactory_h
#include "Soldiers.h"
#include <iostream>
using namespace std;



class SoldierFactory {
public:

    virtual Soldiers* createUnit() = 0;

    int calculateTotalHealthPerUnit() {
        Soldiers* unit = createUnit();
        int totalHealth = unit->healthPerSoldier * unit->amountOfSoldiersPerUnit;
        delete unit;  // Clean up after use
        return totalHealth;
    }

    int calculateTotalDamagePerUnit() {
        Soldiers* unit = createUnit();
        int totalDamage = unit->damagePerSoldier * unit->amountOfSoldiersPerUnit;
        delete unit;  // Clean up after use
        return totalDamage;
    }

    int calculateTotalDefencePerUnit() {
        Soldiers* unit = createUnit();
        int totalDefence = unit->defencePerSoldier * unit->amountOfSoldiersPerUnit;
        delete unit;  // Clean up after use
        return totalDefence;
    }

    virtual ~SoldierFactory();
};

#endif 