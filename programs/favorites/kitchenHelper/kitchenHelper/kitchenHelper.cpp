// Kitchen helper by Andrew T
// This program is designed to help cooks in the kitchen.

#include <iostream>

using namespace std;

//FIXME: Find a way to not use global variables. Use different functions. Using return.
int numCooking = 0;
int numCooks = 0;
int userTemp = 0;
enum OvenState {OVEN_OFF, OVEN_ON_BAKE, OVEN_ON_BROIL};
OvenState ovenStatus = OVEN_OFF;

void kitchenDataEntry() {
	string userString = "";

	cout << "You want to enter data.\n";
	cout << "Input 1 to enter the amount of things cooking.\n";
	cout << "Input 2 to enter the number of cooks working.\n";
	cout << "Input 3 to enter oven settings.\n";
	cout << endl;
	cin >> userString;

	if (userString == "1") {
		cout << "Please enter the number of things cooking:\n";
		cin >> numCooking;

		if (numCooking == 0) {
			cout << "Nothing's cooking.\n";
		}
		else if (numCooking == 1) {
			cout << "There's " << numCooking << " thing cooking.\n";
		}
		else {
			cout << "There are " << numCooking << " things cooking.\n";
		}
	}
	else if (userString == "2") {
		cout << "Please enter the number of cooks working:\n";
		cin >> numCooks;

		if (numCooks == 0) {
			cout << "Nobody's cooking.\n";
		}
		else if (numCooking == 1) {
			cout << "There's " << numCooks << " cooks working.\n";
		}
		else {
			cout << "There are " << numCooks << " cooks working.\n";
		}
	}
	else if (userString == "3") {
		cout << "Please input 0 to turn the oven off and 1 or 2 to turn on bake or broil, respectively.\n";
		cin >> userString;

		if (userString == "0") {
			ovenStatus = OVEN_OFF;
			cout << "Oven is off.\n";
		}
		else if (userString == "1") {
			ovenStatus = OVEN_ON_BAKE;
			cout << "Oven is on, and set to bake.\n";

			cout << "What temperature (F)?\n";
			cin >> userTemp;
			if (userTemp == 1) {
				cout << "The oven is set to " << userTemp << " degree Fahrenheit.\n";
			}
			else {
				cout << "The oven is set to " << userTemp << " degrees Fahrenheit.\n";
			}
		}
		else if (userString == "2") {
			ovenStatus = OVEN_ON_BROIL;
			cout << "Oven is on, and set to broil.\n";

			cout << "What temperature (F)?\n";
			cin >> userTemp;
			if (userTemp == 1) {
				cout << "The oven is set to " << userTemp << " degree Fahrenheit.\n";
			}
			else {
				cout << "The oven is set to " << userTemp << " degrees Fahrenheit.\n";
			}
		}
	}

	cout << endl;
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
		if (numCooking == 0) {
			cout << "Nothing's cooking.\n";
		}
		else if (numCooking == 1) {
			cout << "There's " << numCooking << " thing cooking.\n";
		}
		else {
			cout << "There are " << numCooking << " things cooking.\n";
		}
	}
	else if (userString == "2") {
		if (numCooks == 0) {
			cout << "Nobody's cooking.\n";
		}
		else if (numCooking == 1) {
			cout << "There's " << numCooks << " cook working.\n";
		}
		else {
			cout << "There are " << numCooks << " cooks working.\n";
		}
	}
	else if (userString == "3") {
		if (ovenStatus == OVEN_OFF) {
			cout << "Oven is off.\n";
		}
		else if (ovenStatus == OVEN_ON_BAKE) {
			cout << "Oven is on, and set to bake.\n";
			if (userTemp == 1) {
				cout << "The oven is set to " << userTemp << " degree Fahrenheit.\n";
			}
			else {
				cout << "The oven is set to " << userTemp << " degrees Fahrenheit.\n";
			}
		}
		else if (ovenStatus == OVEN_ON_BROIL) {
			cout << "Oven is on, and set to broil.\n";
			if (userTemp == 1) {
				cout << "The oven is set to " << userTemp << " degree Fahrenheit.\n";
			}
			else {
				cout << "The oven is set to " << userTemp << " degrees Fahrenheit.\n";
			}
		}
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