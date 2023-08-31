
#include "Motorbike.h"

Motorbike::Motorbike(int ID) : Vehicle(ID) {}

int Motorbike::getParkingDuration() const {
    int duration = Vehicle::getParkingDuration();
    return static_cast<int>(duration * 0.85); // Apply 15% reduction
}