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
    void takeDamage(int damage); //own
    bool isAlive(); //own

    int getHealthPerSoldier() const;
    int getDamagePerSoldier() const;
    int getDefencePerSoldier() const;
    int getAmountOfSoldiersPerUnit() const;
    std::string getUnitName() const;

protected:
    Weapon *weapon;
    void setHealthPerSoldier(int health);
    void setDamagePerSoldier(int damage);
    void setDefencePerSoldier(int defence);
    void setAmountOfSoldiersPerUnit(int amount);
    void setUnitName(const std::string &name);

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