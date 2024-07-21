#ifndef PLANE_H
#define PLANE_H
#pragma once 

#include <iostream> 
#include <fstream> 
#include <iomanip> 

using namespace std; 

const int MAXCHAR = 256;
const int CAP = 30;

struct Plane {
	char model[MAXCHAR];
	char make[MAXCHAR];
	double maxFuel; // in gallons
	int emptyWeight; // in pounds
	int engineHP; // horsepower
	int maxRange; // nautical miles
	int cruiseSpeed; // knots
};

void listPlanes(Plane planes[], int size);
int loadPlanes(ifstream& inFile, Plane planes[]);
void addAPlane(Plane planes[], int& size);
#endif /* plane_h */
