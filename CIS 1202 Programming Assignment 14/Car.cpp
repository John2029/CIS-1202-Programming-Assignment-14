#pragma once
#include "Car.h"
#include <iostream>


Car::Car(int n)
{
	numdoors = n;
}

Car::Car()
{
	numdoors = 2;
}

void Car::setNumdoors(int n)
{
	numdoors = n;
}
