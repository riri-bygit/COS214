#ifndef Soldiers_h
#define Soldiers_h

#include <iostream>
#include "Memento.h"
using namespace std;

class Soldiers
{
protected:
    Weapon* weapon;
public:

    // Soldiers(int health, int damage, int defence, int amount, const std::string &name)
    //     : healthPerSoldier(health), damagePerSoldier(damage), defencePerSoldier(defence),
    //       amountOfSoldiersPerUnit(amount), unitName(name) {}

    virtual ~Soldiers();
    virtual Soldiers *clonis()=0;
    virtual void engage();
    virtual void disengage();
    Memento* militusMemento();
    void vivificaMemento(Memento* memento);

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