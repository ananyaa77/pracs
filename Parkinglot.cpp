#include "Parkinglot.h"
#include <iostream>

ParkingLot::ParkingLot(int maxCapacity) : maxCapacity(maxCapacity), currentCount(0) {
    vehicles.reserve(maxCapacity);
}

ParkingLot::~ParkingLot() {
    for (Vehicle* vehicle : vehicles) {
        delete vehicle;
    }
}

bool ParkingLot::parkVehicle(Vehicle* vehicle) {
    if (currentCount < maxCapacity) {
        vehicles.push_back(vehicle);
        currentCount++;
        return true;
    } else {
        std::cout << "The lot is full" << std::endl;
        return false;
    }
}

bool ParkingLot::unparkVehicle(int vehicleID) {
    for (auto it = vehicles.begin(); it != vehicles.end(); ++it) {
        if ((*it)->getID() == vehicleID) {
            delete *it;
            vehicles.erase(it);
            currentCount--;
            return true;
        }
    }
    std::cout << "Vehicle not in the lot" << std::endl;
    return false;
}

int ParkingLot::getCount() const {
    return currentCount;
}