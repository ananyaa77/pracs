#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"

int main() {
    ParkingLot parkingLot(10);

    char vehicleType;
    int vehicleID;

    while (parkingLot.getCount() < 10) {
        std::cout << "Enter vehicle type (C for Car, B for Bus, M for Motorbike): ";
        std::cin >> vehicleType;

        std::cout << "Enter vehicle ID: ";
        std::cin >> vehicleID;

        Vehicle* vehicle = nullptr;

        switch (vehicleType) {
            case 'C':
                vehicle = new Car(vehicleID);
                break;
            case 'B':
                vehicle = new Bus(vehicleID);
                break;
            case 'M':
                vehicle = new Motorbike(vehicleID);
                break;
            default:
                std::cout << "Invalid vehicle type" << std::endl;
                continue;
        }

        parkingLot.parkVehicle(vehicle);
        std::cout << "Vehicle parked. Current count: " << parkingLot.getCount() << std::endl;
    }

    int maxParkingDuration = 15; // seconds
    int overstayingCount = parkingLot.countOverstayingVehicles(maxParkingDuration);
    std::cout << "Number of overstaying vehicles: " << overstayingCount << std::endl;

    return 0;
}