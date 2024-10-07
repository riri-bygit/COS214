#include "MotionSensor.h"

MotionSensor::MotionSensor() : motionDetected(false) {}

void MotionSensor::update() {
    // Simulate motion detection logic
    motionDetected = true; // Set to true for demonstration; implement your logic
    cout << "Motion detected!" << endl;
}

string MotionSensor::getStatus() {
    return motionDetected ? "Motion Detected" : "No Motion Detected";
}

