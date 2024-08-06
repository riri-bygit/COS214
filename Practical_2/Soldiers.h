#ifndef Soldiers_h
#define Soldiers_h

#include <iostream>
using namespace std;

class Soldiers
{
public:
    int healthPerSoldier;
    int damagePerSoldier;
    int defencePerSoldier;
    int amountOfSoldiersPerUnit;
    string unitName;

    Soldiers(int health, int damage, int defence, int amount, const std::string &name)
        : healthPerSoldier(health), damagePerSoldier(damage), defencePerSoldier(defence),
          amountOfSoldiersPerUnit(amount), unitName(name) {}

    virtual ~Soldiers() = default;

    virtual Soldiers *clonis() {};

    virtual void engage();
    virtual void disengage();

private:
    virtual void prepare();
    virtual void execute();
    virtual void retreat();
    virtual void rest();
};
#endif