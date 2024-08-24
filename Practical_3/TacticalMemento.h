#ifndef TACTICALMEMENTO_H
#define TACTICALMEMENTO_H

#include "BattleStrategy.h"

class TacticalMemento {
private:
    BattleStrategy* savedStrategy;

public:
    TacticalMemento(BattleStrategy* strategy) : savedStrategy(strategy) {}

    BattleStrategy* getSavedStrategy() const {
        return savedStrategy;
    }
};

#endif // TACTICALMEMENTO_H
