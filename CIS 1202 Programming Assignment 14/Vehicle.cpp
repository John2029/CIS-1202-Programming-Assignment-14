#pragma once
#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle(string m, int y)
{
	manufacturer = m;
	yearbuilt = y;
}

Vehicle::Vehicle()
{
	manufacturer = "e";
	yearbuilt = 2000;
}

void Vehicle::setManufacturer(string m)
{
	manufacturer = m;
}

void Vehicle::setYearbuilt(int y)
{
	yearbuilt = y;
}