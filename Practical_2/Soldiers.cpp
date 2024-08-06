#include "Soldiers.h"




Memento* Soldiers::militusMemento() {
    return new Memento(healthPerSoldier, damagePerSoldier, defencePerSoldier, amountOfSoldiersPerUnit, unitName, weapon);
}

void Soldiers::vivificaMemento(Memento* memento) {
    healthPerSoldier = memento->healthPerSoldier;
    damagePerSoldier = memento->damagePerSoldier;
    defencePerSoldier = memento->defencePerSoldier;
    amountOfSoldiersPerUnit = memento->amountOfSoldiersPerUnit;
    unitName = memento->unitName;
    weapon = memento->weapon;
}

int getHealthPerSoldier() const
    {
        return healthPerSoldier;
    }

    int getDamagePerSoldier() const
    {
        return damagePerSoldier;
    }

    int getDefencePerSoldier() const
    {
        return defencePerSoldier;
    }

    int getAmountOfSoldiersPerUnit() const
    {
        return amountOfSoldiersPerUnit;
    }

    std::string getUnitName() const
    {
        return unitName;
    }
