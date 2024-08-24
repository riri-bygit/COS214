#include "TacticalCommand.h"

void TacticalCommand::setStrategy(BattleStrategy *s)
{
    this->strategy = strategy;
}
void TacticalCommand::execute()
{
    return strategy->excute();
}

void TacticalCommand::chooseBestStrategy()
{
    // if (!history.empty()) {
    //     // Logic to choose the best strategy based on saved states
    //     // Here, we are simply restoring the last saved strategy as an example
    //     restoreState();
    // }
}
TacticalCommand::~TacticalCommand()
{
}