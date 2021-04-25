// John May
// Version 1
// 4/22/2021
// CIS 1202 101

#pragma once
#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
using namespace std;

class Vehicle
{
private:
	string manufacturer;
	int yearbuilt;
public:
	Vehicle(string, int);
	Vehicle();
	void setManufacturer(string);
	void setYearbuilt(int);
	string getManufacturer()
	{
		return manufacturer;
	}
	int getYearbuilt()
	{
		return yearbuilt;
	}


};

#endif