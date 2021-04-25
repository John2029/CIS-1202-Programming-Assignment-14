// John May
// CIS 1202
// 4/22/2021
// Version 1
#pragma once
#include "PersonalLibrary.h"
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
void displayInfo(Vehicle);
void displayInfo(Car);
void displayInfo(Truck);

int main() {
	Vehicle vehicle;
	Truck truck;
	Car car;
	int numdoors;
	string manufacturer;
	int yearbuilt = 2000;
	int towingcapacity;
	cout << "Vehicle:" << endl;
	cout << "Enter Manufacturer:" << endl;
	getline(cin, manufacturer);
	vehicle.setManufacturer(manufacturer);
	yearbuilt = checkInt("Enter Year Built: ");
	vehicle.setYearbuilt(yearbuilt);
	displayInfo(vehicle);
	cout << "Car:" << endl;
	cin.ignore(100, '\n');
	cout << "Enter Manufacturer:" << endl;
	getline(cin, manufacturer);
	car.setManufacturer(manufacturer);
	yearbuilt = checkInt("Enter Year Built: ");
	car.setYearbuilt(yearbuilt);
	numdoors = checkInt("How many doors are there?" );
	car.setNumdoors(numdoors);
	displayInfo(car);
	cout << "Truck:" << endl;
	cout << "Enter Manufacturer:" << endl;
	cin.ignore(100, '\n');
	getline(cin, manufacturer);
	truck.setManufacturer(manufacturer);
	yearbuilt = checkInt("Enter Year Built: ");
	truck.setYearbuilt(yearbuilt);
	towingcapacity = checkInt("How much is the towing capacity?");
	truck.setTowingcapacity(towingcapacity);
	displayInfo(truck);
	endFile();
}
void displayInfo(Car car)
{
	cout << "Manufacturer: " << car.getManufacturer() << endl;
	cout << "Year Built: " << car.getYearbuilt() << endl;
	cout << "Doors:" << car.getNumdoors() << " doors" << endl;
}
void displayInfo(Truck truck)
{
	cout << "Manufacturer: " << truck.getManufacturer() << endl;
	cout << "Year Built: " << truck.getYearbuilt() << endl;
	cout << "Towing Capacity:" << truck.getTowingcapacity() << endl;
}
void displayInfo(Vehicle vehicle)
{
	cout << "Manufacturer: " << vehicle.getManufacturer() << endl;
	cout << "Year Built: " << vehicle.getYearbuilt() << endl;
	
}