#ifndef TACTICALCOMMAND_H
#define TACTICALCOMMAND_H

#include <string>
#include "BattleStrategy.h";
using namespace std;

class TacticalCommand
{
private:
    BattleStrategy *strategy;

public:
    void setStrategy(BattleStrategy *s);
    void execute();
    void chooseBestStrategy();
    ~TacticalCommand();
};

#endif