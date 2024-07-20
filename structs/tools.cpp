#include "tools.h"

void openFile(ifstream &inFile, char file[MAXCHAR]) {
	inFile.open(file); 
	while(!inFile.is_open()) {
		cout << file << " was not found. Try again or type 'quit' to exit the program.\n";
	exit(0);
	}
}
