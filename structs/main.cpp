#include "plane.h"
#include "tools.h"

using namespace std; 

int main() {
	Plane planes[CAP];
	int count = 0;
	//char option;
	char filename[MAXCHAR] = "planes.txt";
	ifstream inFile;
	
	cout << "Welcome to the airplane collection program. What is the name of the airplane collection file? ";

	
	openFile(inFile, filename); 

	
	count = loadPlanes(inFile, planes);
	listPlanes(planes, count);

	
	return 0;
}

