#ifndef TACTICALPLANNER_H
#define TACTICALPLANNER_H

#include "BattleStrategy.h"
#include "TacticalMemento.h"

class TacticalPlanner {
private:
    BattleStrategy* currentStrategy;

public:
    TacticalPlanner() : currentStrategy(nullptr) {}

    void setStrategy(BattleStrategy* strategy) {
        currentStrategy = strategy;
    }

    TacticalMemento* createMemento() {
        return new TacticalMemento(currentStrategy);
    }

    void restoreMemento(TacticalMemento* memento) {
        currentStrategy = memento->getSavedStrategy();
    }
};

#endif // TACTICALPLANNER_H
