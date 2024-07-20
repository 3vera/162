#include "plane.h"

int loadPlanes(ifstream& inFile, Plane planes[]) {
	int size = 0;

	while(!inFile.eof()) {
		inFile.getline(planes[size].model, MAXCHAR, ';');
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
	}
	inFile.close();
	return size;
}

void listPlanes(Plane planes[], int size) {
	cout << left << setw(4) << "No.";
	cout << left << setw(18) << "Model";
	cout << left << setw(15) << "Make";
	cout << right << setw(16) << "Fuel Capacity";
	cout << right << setw(16) << "Empty Weight";
	cout << right << setw(16) << "Horsepower";
	cout << right << setw(16) << "Range";
	cout << right << setw(16) << "Cruise Speed\n\n";
	cout << setfill ('-') << setw(115) << "-\n"; 
	
	for (int i = 0; i < size; i++) {
		cout << setfill (' ') << (i+1) << ".";
		cout << left << setw(18) << planes[i].model;	
		cout << left << setw(15) << planes[i].make;	
		cout << right << setw(15) << planes[i].maxFuel;	
		cout << right << setw(15) << planes[i].emptyWeight;	
		cout << right << setw(15) << planes[i].engineHP;	
		cout << right << setw(15) << planes[i].maxRange;	
		cout << right << setw(15) << planes[i].cruiseSpeed << endl;	
	} 
}
