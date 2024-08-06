#ifndef Soldiers_h
#define Soldiers_h

#include <iostream>
#include "Memento.h"
using namespace std;

class Soldiers
{

public:
    virtual ~Soldiers();
    virtual Soldiers *clonis() = 0;
    virtual void engage();
    virtual void disengage();
    Memento *militusMemento();
    void vivificaMemento(Memento *memento);

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

protected:
    Weapon *weapon;
    void setHealthPerSoldier(int health)
    {
        healthPerSoldier = health;
    }

    void setDamagePerSoldier(int damage)
    {
        damagePerSoldier = damage;
    }

    void setDefencePerSoldier(int defence)
    {
        defencePerSoldier = defence;
    }

    void setAmountOfSoldiersPerUnit(int amount)
    {
        amountOfSoldiersPerUnit = amount;
    }

    void setUnitName(const std::string &name)
    {
        unitName = name;
    }

private:
    int healthPerSoldier;
    int damagePerSoldier;
    int defencePerSoldier;
    int amountOfSoldiersPerUnit;
    string unitName;
    virtual void prepare();
    virtual void execute();
    virtual void retreat();
    virtual void rest();
};
#endif