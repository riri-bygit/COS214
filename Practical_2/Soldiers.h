#ifndef Soldiers_h
#define Soldiers_h

#include "Memento.h"
#include "Weapon.h"

#include <vector>
#include <string>
#include <iostream>
#include <map>
#include <list>


using namespace std;

class Soldiers
{

public:
    virtual ~Soldiers();
    virtual Soldiers *clonis();
    virtual void engage();
    virtual void disengage();
    Memento *militusMemento();
    void vivificaMemento(Memento *memento);

    int getHealthPerSoldier() const;
    int getDamagePerSoldier() const;
    int getDefencePerSoldier() const;
    int getAmountOfSoldiersPerUnit() const;
    std::string getUnitName() const;

    Weapon *weapon;

private:
    int healthPerSoldier;
    int damagePerSoldier;
    int defencePerSoldier;
    int amountOfSoldiersPerUnit;
    std::string unitName;
    virtual void prepare();
    virtual void execute();
    virtual void retreat();
    virtual void rest();
};
#endif