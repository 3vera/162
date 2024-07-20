#include "plane.h"

using namespace std; 

int main() {
	Plane planes[CAP];
	int count = 0;
	char option;
	ifstream inFile;

	inFile.open("planes.txt");
	while(!inFile.is_open()) {
		cout << "file failed to open!\n";
		exit(1);
	}
	
	count = loadPlanes(inFile, planes);
	listPlanes(planes, count);

	
	return 0;
}

