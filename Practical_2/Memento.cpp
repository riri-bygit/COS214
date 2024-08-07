#include "Memento.h"

Memento::Memento(int value1, int value2, int value3, int value4, std::string value5) 
    : healthPerSoldier(value1), damagePerSoldier(value2), defencePerSoldier(value3),
      amountOfSoldiersPerUnit(value4), unitName(value5), weapon(nullptr) {}

Memento::~Memento() {
    delete weapon;
}
