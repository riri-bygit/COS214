#include "TacticalMemento.h"

TacticalMemento::TacticalMemento(BattleStrategy* strategy) : savedStrategy(strategy) {}

BattleStrategy* TacticalMemento::getSavedStrategy() {
    return savedStrategy;
}
