#include "WarArchives.h"

void WarArchives::addTacticalMemento(TacticalMemento* memento, const std::string& label) {
    mementos.emplace_back(label, memento);
}

TacticalMemento* WarArchives::getMemento(const std::string& label) {
    for (auto& m : mementos) {
        if (m.first == label) {
            return m.second;
        }
    }
    return nullptr;
}
