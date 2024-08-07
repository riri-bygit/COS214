#include <iostream>
#include "Weapon.h"
#include "Soldiers.h"
#include "SoldierFactory.h"
#include "ShieldBearerFactory.h"
#include "InfantryFactory.h"
#include "BoatmanFactory.h"
#include "CareTaker.h"

using namespace std;

void simulateBattle(SoldierFactory* factory) {
    Soldiers* unit = factory->createUnit();
    cout << "Simulating battle for unit: " << unit->getUnitName() << endl;
    
    // Engage and disengage sequences
    unit->engage();
    unit->disengage();

    // Save the state of the unit using Memento pattern
    Memento* memento = unit->militusMemento();
    CareTaker caretaker;
    caretaker.addMemento(memento);
    
    // Simulate some changes in the unit's state
    unit->setHealthPerSoldier(80);
    unit->setDamagePerSoldier(40);
    unit->setDefencePerSoldier(30);
    cout << "State of unit after changes: " << endl;
    unit->engage();
    
    // Restore the unit's state from Memento
    unit->vivificaMemento(caretaker.getMemento(0));
    cout << "Restored state of unit: " << endl;
    unit->engage();
    
    delete unit;
}

int main() {
    SoldierFactory* infantryFactory = new InfantryFactory();
    SoldierFactory* shieldBearerFactory = new ShieldBearerFactory();
    SoldierFactory* boatmanFactory = new BoatmanFactory();
    
    cout << "Creating and simulating Infantry unit:" << endl;
    simulateBattle(infantryFactory);
    
    cout << "\nCreating and simulating ShieldBearer unit:" << endl;
    simulateBattle(shieldBearerFactory);
    
    cout << "\nCreating and simulating Boatman unit:" << endl;
    simulateBattle(boatmanFactory);
    
    delete infantryFactory;
    delete shieldBearerFactory;
    delete boatmanFactory;
    
    return 0;
}
