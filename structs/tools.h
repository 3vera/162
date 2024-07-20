#ifndef TOOLS_H
#define TOOLS_H
#include "plane.h"

using namespace std; 

void openFile(ifstream &inFile, char file[MAXCHAR]);
void getInput(char input[MAXCHAR]);
void menu();
void getOption(char &choice);
#endif /* tools.h */

