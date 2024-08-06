#ifndef CARETAKER_H
#define CARETAKER_H

#include <list>
#include "Memento.h"

class CareTaker {
private:
    std::list<Memento*> mementoList;
public:
    void addMemento(Memento* memento);
    Memento* getMemento(int index);
    ~CareTaker();
};

#endif // CARETAKER_H
