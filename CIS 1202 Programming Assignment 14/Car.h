#pragma once
#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"
#include <string>
using namespace std;

class Car: public Vehicle
{
private:
	int numdoors;

public:
	Car(int);
	Car();
	void setNumdoors(int);
	int getNumdoors()
	{
		return numdoors;
	}

};
#endif