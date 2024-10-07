
#include "SmokeDetector.h"

SmokeDetector::SmokeDetector() : smokeDetected(false) {}

void SmokeDetector::update() {
    // Simulate smoke detection logic
    smokeDetected = true; // Set to true for demonstration; implement your logic
    cout << "Smoke detected! Executing lockAllDoors command." << endl;
}

string SmokeDetector::getStatus() {
    return smokeDetected ? "Smoke Detected" : "No Smoke Detected";
}
