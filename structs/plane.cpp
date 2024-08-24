#include "plane.h"

int loadPlanes(ifstream& inFile, Plane planes[]) {
	int size = 0;
	inFile.getline(planes[size].model, MAXCHAR, ';');
	while(!inFile.eof()) {
		inFile.getline(planes[size].make, MAXCHAR, ';');
		inFile >> planes[size].maxFuel;
		inFile.ignore(100, ';');
		inFile >> planes[size].emptyWeight;
		inFile.ignore(100, ';');
		inFile >> planes[size].engineHP;
		inFile.ignore(100, ';');
		inFile >> planes[size].maxRange;
		inFile.ignore(100, ';');
		inFile >> planes[size].cruiseSpeed;
		size++;	
		inFile.getline(planes[size].model, MAXCHAR, ';');
		
	}
	inFile.close();
	return size;
}

void listPlanes(Plane planes[], int size) {
	cout << left << setw(18) << "Model";
	cout << left << setw(15) << "Make";
	cout << right << setw(16) << "Fuel Capacity";
	cout << right << setw(16) << "Empty Weight";
	cout << right << setw(16) << "Horsepower";
	cout << right << setw(16) << "Range";
	cout << right << setw(16) << "Cruise Speed\n\n";
	cout << setfill ('-') << setw(115) << "-" << setfill (' ') << endl; 
	
	for (int i = 0; i < size; i++) {
		cout << (i+1) << ".";
		cout << left << setw(18) << planes[i].model;	
		cout << left << setw(15) << planes[i].make;	
		cout << right << setw(15) << planes[i].maxFuel;	
		cout << right << setw(15) << planes[i].emptyWeight;	
		cout << right << setw(15) << planes[i].engineHP;	
		cout << right << setw(15) << planes[i].maxRange;	
		cout << right << setw(15) << planes[i].cruiseSpeed << '\n'; 	
	} 
}

void addAPlane(Plane planes[], int& size) {

	Plane tempPlane;
	
	cout << "What is the model (name) of the airplane? ";
	cin >> tempPlane.model;
	cout << "\nWhat is the make (manufacturer) of the airplane? ";	
	cin >> tempPlane.make;
	cout << "\nWhat is the fuel capacity in gallons? ";
	cin >> tempPlane.maxFuel;
	cout << "\nWhat is the empty weight in lbs? ";
	cin >> tempPlane.emptyWeight;
	cout << "\nWhat is the horsepower of the engine? ";
	cin >> tempPlane.engineHP;
	cout << "\nWhat is the range? ";
	cin >> tempPlane.maxRange;
	cout << "\nWhat is the cruise speed? ";
	cin >> tempPlane.cruiseSpeed;
	planes[size] = tempPlane;
	cout << "Successfully added " << planes[size].model << " to the database.\n";
	size++; 
}
