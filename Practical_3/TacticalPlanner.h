#ifndef TACTICALPLANNER_H
#define TACTICALPLANNER_H

#include "BattleStrategy.h"

class TacticalMemento;

class TacticalPlanner {
private:
    BattleStrategy* currentStrategy;
public:
    void setStrategy(BattleStrategy* strategy);
    TacticalMemento* createMemento();
    void restoreMemento(TacticalMemento* memento);
};

#endif
