#pragma once
#include "Truck.h"
#include <iostream>

Truck::Truck(int t)
{
	towingcapacity = t;
}

Truck::Truck()
{
	towingcapacity = 1;
}

void Truck::setTowingcapacity(int t)
{
	towingcapacity = t;
}