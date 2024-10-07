#include "MotionSensor.h"

MotionSensor::MotionSensor(Room* r) : motionDetected(false), room(r) {}

void MotionSensor::update() {
    // Simulate motion detection logic
    motionDetected = true; // Set to true for demonstration; implement your logic
    cout << "Motion detected in the room!" << endl;
}

string MotionSensor::getStatus() {
    return motionDetected ? "Motion Detected" : "No Motion Detected";
}
