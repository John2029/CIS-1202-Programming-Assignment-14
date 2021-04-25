#pragma once
#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"
#include <string>
using namespace std;
class Truck: public Vehicle
{
private:
	int towingcapacity;
public:
	Truck(int);
	Truck();
	void setTowingcapacity(int);
	int getTowingcapacity()
	{
		return towingcapacity;
	}

};

#endif