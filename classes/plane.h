#ifndef PLANE_H
#define PLANE_H
#pragma once 

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

const int STR_SIZE = 256;

class Plane {
private: //private properties 
	char make[STR_SIZE];
	char model[STR_SIZE];
	double maxFuel; // in gallons 
	int emptyWeight; // in pounds 
	int engineHP; // horsepower
	int maxRange; // nautical miles 
	int cruiseSpeed; // knots 
public: 
	Plane(); // defualt constructor 
	// "getters" 
	const char * getMake();
	const char * getModel();
	double getMaxFuel(); 
	int getEmptyWeight();
	int getMaxRange();	
	int getCruiseSpeed();
	// "setters" 
	void setMake(const char *);
	void getModel(const char *);
	void setMaxFuel(double);
	void setEmptyWeight(int);
	void setMaxRange(int);
	void setCruiseSpeed(int);
};

#endif