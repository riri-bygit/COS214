#include "TacticalPlanner.h"
#include "TacticalMemento.h"

void TacticalPlanner::setStrategy(BattleStrategy* strategy) {
    currentStrategy = strategy;
}

TacticalMemento* TacticalPlanner::createMemento() {
    return new TacticalMemento(currentStrategy);
}

void TacticalPlanner::restoreMemento(TacticalMemento* memento) {
    currentStrategy = memento->getSavedStrategy();
}
