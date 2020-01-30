// Kitchen helper by Andrew T
// This program is designed to help cooks in the kitchen.

#include <iostream>

using namespace std;

//FIXME: Find a way to not use global variables. Use different functions, also using return.
int g_numCooking = 0;
int g_numCooks = 0;
int g_userTemp = 0;
enum g_OvenState {OVEN_OFF, OVEN_ON_BAKE, OVEN_ON_BROIL};
g_OvenState g_ovenStatus = OVEN_OFF;

void checkNumCooking() {
	if (g_numCooking == 0) {
		cout << "Nothing's cooking.\n";
	}
	else if (g_numCooking == 1) {
		cout << "There's " << g_numCooking << " thing cooking.\n";
	}
	else {
		cout << "There are " << g_numCooking << " things cooking.\n";
	}
}

void checkNumCooks() {
	if (g_numCooks == 0) {
		cout << "Nobody's cooking.\n";
	}
	else if (g_numCooking == 1) {
		cout << "There's " << g_numCooks << " cook working.\n";
	}
	else {
		cout << "There are " << g_numCooks << " cooks working.\n";
	}
}

void checkOvenStatus() {
	if (g_ovenStatus == OVEN_OFF) {
		cout << "Oven is off.\n";
	}
	else if (g_ovenStatus == OVEN_ON_BAKE) {
		cout << "Oven is on, and set to bake.\n";
		if (g_userTemp == 1) {
			cout << "The oven is set to " << g_userTemp << " degree Fahrenheit.\n";
		}
		else {
			cout << "The oven is set to " << g_userTemp << " degrees Fahrenheit.\n";
		}
	}
	else if (g_ovenStatus == OVEN_ON_BROIL) {
		cout << "Oven is on, and set to broil.\n";
		if (g_userTemp == 1) {
			cout << "The oven is set to " << g_userTemp << " degree Fahrenheit.\n";
		}
		else {
			cout << "The oven is set to " << g_userTemp << " degrees Fahrenheit.\n";
		}
	}
}

void enterNumCooking() {
	cout << "Please enter the number of items cooking:\n";
	cin >> g_numCooking;

	if (g_numCooking == 0) {
		cout << "Nothing's cooking.\n";
	}
	else if (g_numCooking == 1) {
		cout << "There's " << g_numCooking << " thing cooking.\n";
	}
	else {
		cout << "There are " << g_numCooking << " things cooking.\n";
	}
}

void enterNumCooks() {
	cout << "Please enter the number of cooks working:\n";
	cin >> g_numCooks;

	if (g_numCooks == 0) {
		cout << "Nobody's cooking.\n";
	}
	else if (g_numCooking == 1) {
		cout << "There's " << g_numCooks << " cooks working.\n";
	}
	else {
		cout << "There are " << g_numCooks << " cooks working.\n";
	}
}

void enterOvenStatus() {
	string userString;

	cout << "Please input 0 to turn the oven off and 1 or 2 to turn on bake or broil, respectively.\n";
	cin >> userString;

	if (userString == "0") {
		g_ovenStatus = OVEN_OFF;
		cout << "Oven is off.\n";
	}
	else if (userString == "1") {
		g_ovenStatus = OVEN_ON_BAKE;
		cout << "Oven is on, and set to bake.\n";

		cout << "What temperature (F)?\n";
		cin >> g_userTemp;
		if (g_userTemp == 1) {
			cout << "The oven is set to " << g_userTemp << " degree Fahrenheit.\n";
		}
		else {
			cout << "The oven is set to " << g_userTemp << " degrees Fahrenheit.\n";
		}
	}
	else if (userString == "2") {
		g_ovenStatus = OVEN_ON_BROIL;
		cout << "Oven is on, and set to broil.\n";

		cout << "What temperature (F)?\n";
		cin >> g_userTemp;
		if (g_userTemp == 1) {
			cout << "The oven is set to " << g_userTemp << " degree Fahrenheit.\n";
		}
		else {
			cout << "The oven is set to " << g_userTemp << " degrees Fahrenheit.\n";
		}
	}
}

void kitchenCheckStatus() {
	string userString = "";

	cout << "Hello. This is a test. You want to check the status.\n";
	cout << "Input 0 to quit.\n";
	cout << "Input 1 to check how many things are cooking.\n";
	cout << "Input 2 to check how many cooks are working.\n";
	cout << "Input 3 to check the oven's status.\n";
	cout << endl;
	cin >> userString;

	if (userString == "1") {
		checkNumCooking();
	}
	else if (userString == "2") {
		checkNumCooks();
	}
	else if (userString == "3") {
		checkOvenStatus();
	}

	cout << endl;
}

void kitchenDataEntry() {
	string userString = "";

	cout << "You want to enter data.\n";
	cout << "Input 1 to enter the amount of things cooking.\n";
	cout << "Input 2 to enter the number of cooks working.\n";
	cout << "Input 3 to enter oven settings.\n";
	cout << endl;
	cin >> userString;

	if (userString == "1") {
		enterNumCooking();
	}
	else if (userString == "2") {
		enterNumCooks();
	}
	else if (userString == "3") {
		enterOvenStatus();
	}

	cout << endl;
}

void startFunction() {
	string userString = "";

	while (userString != "0") {
		cout << "Input 0 to quit.\n";
		cout << "Input 1 to enter data into the program.\n";
		cout << "Input 2 to check data in the program.\n";
		cout << "Please enter an integer:\n";
		cout << endl;
		cin >> userString;
		
		if (userString == "0") {
			break;
		}
		else if (userString == "1") {
			kitchenDataEntry();
		}
		else if (userString == "2") {
			kitchenCheckStatus();
		}

		cout << endl;
	}
}

int main() {
	startFunction();
	return 0;
}