#include "Weapon.h"
#include <iostream>
using namespace std;

Weapon::Weapon() : weaponName("None"), weaponDamage(0) {}  // Default constructor implementation

Weapon::Weapon(std::string name, int damage) : weaponName(name), weaponDamage(damage) {}

std::string Weapon::getWeaponName() {
    return weaponName;
}


int Weapon::getWeaponDamage() {
    return weaponDamage;
}

void Weapon::useWeapon() {
    std::cout << "Using weapon: " << weaponName << " which does " << weaponDamage << " damage." << std::endl;
}

// Weapon Weapon:: getWeapon()
// {
//     return weapon;
// }

Weapon::~Weapon() {
    std::cout << "Destroying weapon: " << weaponName << std::endl;
    // delete weapon;

}
