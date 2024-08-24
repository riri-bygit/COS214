#ifndef WARARCHIVES_H
#define WARARCHIVES_H

#include "TacticalMemento.h"
#include <vector>
#include <string>

class WarArchives {
private:
    std::vector<std::pair<std::string, TacticalMemento*>> mementos;
public:
    void addTacticalMemento(TacticalMemento* memento, const std::string& label);
    TacticalMemento* getMemento(const std::string& label);
};

#endif 
