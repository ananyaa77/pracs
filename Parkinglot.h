#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "Vehicle.h"
#include <vector>

class ParkingLot {
public:
    ParkingLot(int maxCapacity);
    ~ParkingLot();

    bool parkVehicle(Vehicle* vehicle);
    bool unparkVehicle(int vehicleID);
    int getCount() const;

private:
    int maxCapacity;
    int currentCount;
    std::vector<Vehicle*> vehicles;
};

#endif // PARKINGLOT_H