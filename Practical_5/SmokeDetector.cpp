#include "SmokeDetector.h"

SmokeDetector::SmokeDetector(Room *r, Command *command)
    : smokeDetected(false), room(r), lockAllDoorsCommand(command) {}

void SmokeDetector::update()
{

    smokeDetected = true;
    cout << "Smoke detected! Executing lock all doors command." << endl;

    if (lockAllDoorsCommand)
    {
        lockAllDoorsCommand->execute(); // Execute the command to lock all doors
    }
    room->getStatus();
}

string SmokeDetector::getStatus()
{
    return smokeDetected ? "Smoke Detected" : "No Smoke Detected";
}

SmokeDetector::~SmokeDetector()
{
}
