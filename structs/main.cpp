#include "plane.h"
#include "tools.h"

using namespace std; 

int main() {
	Plane planes[CAP];
	int count = 0;
	char option;
	char filename[MAXCHAR] = "planes.txt";
	ifstream inFile;
	
	cout << "Welcome to the airplane collection program. What is the name of the airplane collection file? ";
	getInput(filename);	
	openFile(inFile, filename); 
	
	count = loadPlanes(inFile, planes);
	cout << "Successfully loaded " << count << " airplanes.\n";
	listPlanes(planes, count);

	menu();
	getOption(option);
		if(tolower(option) == 'a') {
			addAPlane(planes, count);
		} else if(tolower(option) == 'l') {
			listPlanes(planes, count);
		}
	listPlanes(planes, count);
	return 0;
}

