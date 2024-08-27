#ifndef STOREITEM_H
#define STOREITEM_H

class Plane {
pivate: //private properties 
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
	void setMake(cosnt char *);
	void getModel(const char *);
	void setMaxFuel(double);
	void setEmptyWeight(int);
	void setMaxRange(int);
	void setCruiseSpeed(int);
};


#endif
