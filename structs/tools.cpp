#include "tools.h"

void openFile(ifstream &inFile, char file[MAXCHAR]) {
	inFile.open(file); 
	while(!inFile.is_open()) {
		cout << file << " was not found. Try again or type 'quit' to exit the program.\n";
		cout << "What is the name of the airplane collection file? ";
		getInput(file);
		inFile.open(file);
	}
}

void getInput(char input[MAXCHAR]) {
	cin.getline(input, MAXCHAR);
	if(strcmp(input, "quit") == 0) {
		exit(0);
	}
}

void menu() {
	cout << "\nWhat would you like to do? (A)dd a plane, (L)ist all planes, or (Q)uit? ";
}

void getOption(char& choice) {
	cin >> choice;
	if (tolower(choice) == 'q') {
		exit(0);
	} else {
		return;
	}
}
