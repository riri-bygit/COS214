#include "LegionFactory.h"
#include "Legion.h"
#include "BattleStrategy.h"
#include "TacticalPlanner.h"
#include "TacticalMemento.h"
#include "WarArchives.h"

int main() {
    LegionFactory* factory = new WoodlandFactory();
    LegionUnit* infantry = factory->createInfantry();

    infantry->move();
    infantry->attack();

    delete infantry;
    delete factory;

    // Strategy and Memento usage
    TacticalPlanner planner;
    BattleStrategy* strategy = new Flanking();
    planner.setStrategy(strategy);
    TacticalMemento* memento = planner.createMemento();

    WarArchives archives;
    archives.addTacticalMemento(memento, "Initial Plan");

    // Retrieve and apply strategy
    TacticalMemento* savedPlan = archives.getMemento("Initial Plan");
    if (savedPlan) {
        planner.restoreMemento(savedPlan);
    }

    delete strategy;
    delete memento;

    return 0;
}
