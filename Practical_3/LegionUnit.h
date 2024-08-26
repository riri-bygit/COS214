#ifndef LEGIONUNIT_H
#define LEGIONUNIT_H
#include <iostream>
using namespace std;
class LegionUnit
{
protected:
    string name;
    int health;
    int attackPower;
    int defense;

public:
    LegionUnit(string n,int h, int ap, int d) :  name(n),health(h), attackPower(ap), defense(d) {}


    virtual void move() = 0;
    virtual void attack() = 0;
    virtual void displayInfo() const {
        std::cout << "Unit Name: " << name << "\n"
                  << "Health: " << health << "\n"
                  << "Attack Power: " << attackPower << "\n"
                  << "Defense: " << defense << "\n";
    }
    virtual ~LegionUnit() = default;
};

#endif
