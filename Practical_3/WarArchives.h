#ifndef WARARCHIVES_H
#define WARARCHIVES_H

#include <map>
#include <string>
#include "TacticalMemento.h"

class WarArchives {
private:
    std::map<std::string, TacticalMemento*> archives;

public:
    void addTacticalMemento(TacticalMemento* memento, const std::string& label) {
        archives[label] = memento;
    }

    void removeTacticalMemento(const std::string& label) {
        auto it = archives.find(label);
        if (it != archives.end()) {
            delete it->second;
            archives.erase(it);
        }
    }

    TacticalMemento* getTacticalMemento(const std::string& label) const {
        auto it = archives.find(label);
        return (it != archives.end()) ? it->second : nullptr;
    }

    ~WarArchives() {
        for (auto& pair : archives) {
            delete pair.second;
        }
    }
};

#endif // WARARCHIVES_H
