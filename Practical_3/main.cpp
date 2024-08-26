

#include "WoodlandFactory.cpp"
#include "Legion.h"
#include "BattleStrategy.h"
#include "TacticalPlanner.h"
#include "TacticalMemento.h"
// #include "TacticalCommand.h"
#include "WarArchives.h"

#include <iostream>
using namespace std;
int main()
{
    // Create Factories
    LegionFactory *factory = new WoodlandFactory();

    // Create Units
    LegionUnit *infantry = factory->createInfantry();
    LegionUnit *cavalry = factory->createCavalry();
    LegionUnit *artillery = factory->createArtillery();

    // Execute Unit Actions
    infantry->move();
    infantry->attack();

    cavalry->move();
    cavalry->attack();

    artillery->move();
    artillery->attack();

    // Set Up Strategies
    BattleStrategy *flanking = new Flanking();
    BattleStrategy *fortification = new Fortification();
    BattleStrategy *ambush = new Ambush();

    // TacticalCommand command;

    // Set and execute strategies
    // command.setStrategy(flanking);
    // command.executeStrategy();
    // command.saveStrategy("Flanking");

    // command.setStrategy(fortification);
    // command.executeStrategy();
    // command.saveStrategy("Fortification");

    // // Restore and execute previous strategy
    // command.restoreStrategy("Flanking");
    // command.executeStrategy();

    // command.restoreStrategy("Fortification");
    // command.executeStrategy();

    // Cleanup
    delete factory;
    delete infantry;
    delete cavalry;
    delete artillery;
    delete flanking;
    delete fortification;
    delete ambush;

    return 0;
}