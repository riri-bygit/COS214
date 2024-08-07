#include "Weapon.h"

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

Weapon::~Weapon() {}
