// Kitchen helper by Andrew T
// This program is designed to help cooks in the kitchen.

#include <iostream>

using namespace std;

void alphaMenu(int userOption) {
	switch (userOption) {
	case 1:
		cout << "Input 0 to quit.\n";
		cout << "Input 1 to enter data into the program.\n";
		cout << "Input 2 to check data in the program.\n";
		cout << "Please enter an integer:\n";
		cout << endl;
		break;
	case 2:
		cout << "You want to enter data.\n";
		cout << "Input 1 to enter the amount of things cooking.\n";
		cout << "Input 2 to enter the number of cooks working.\n";
		cout << "Input 3 to enter oven settings.\n";
		cout << endl;
		break;
	case 3:
		cout << "You want to check the status.\n";
		cout << "Input 0 to quit.\n";
		cout << "Input 1 to check how many things are cooking.\n";
		cout << "Input 2 to check how many cooks are working.\n";
		cout << "Input 3 to check the oven's status.\n";
		cout << endl;
		break;
	default:
		break;
	}
}

void checkNumCooking(int numCooking) {
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

void checkNumCooks(int numCooks) {
	if (numCooks == 0) {
		cout << "Nobody's cooking.\n";
	}
	else if (numCooks == 1) {
		cout << "There's " << numCooks << " cook working.\n";
	}
	else {
		cout << "There are " << numCooks << " cooks working.\n";
	}
}

void checkOvenStatus(int ovenStatus) {
	if (ovenStatus == 0) {
		cout << "Oven is off.\n";
	}
	else if (ovenStatus == 1) {
		cout << "Oven is on, and set to bake.\n";
	}
	else if (ovenStatus == 2) {
		cout << "Oven is on, and set to broil.\n";
	}
}

void checkOvenTemp(int ovenHeat) {
	if (ovenHeat == 1) {
		cout << "The oven is set to " << ovenHeat << " degree Fahrenheit.\n";
	}
	else {
		cout << "The oven is set to " << ovenHeat << " degrees Fahrenheit.\n";
	}
}

int enterNumCooking() {
	int numCooking;
	cout << "Please enter the number of items cooking:\n";
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

	return numCooking;
}

int enterNumCooks() {
	int numCooks;
	cout << "Please enter the number of cooks working:\n";
	cin >> numCooks;

	if (numCooks == 0) {
		cout << "Nobody's cooking.\n";
	}
	else if (numCooks == 1) {
		cout << "There's " << numCooks << " cooks working.\n";
	}
	else {
		cout << "There are " << numCooks << " cooks working.\n";
	}

	return numCooks;
}

int enterOvenStatus() {
	string userString = "";
	enum OvenState {OVEN_OFF, OVEN_ON_BAKE, OVEN_ON_BROIL};
	OvenState ovenStatus = OVEN_OFF;

	cout << "Please input 0 to turn the oven off and 1 or 2 to turn on bake or broil, respectively.\n";
	cin >> userString;

	if (userString == "0") {
		ovenStatus = OVEN_OFF;
		cout << "Oven is off.\n";
	}
	else if (userString == "1") {
		ovenStatus = OVEN_ON_BAKE;
		cout << "Oven is on, and set to bake.\n";
	}
	else if (userString == "2") {
		ovenStatus = OVEN_ON_BROIL;
		cout << "Oven is on, and set to broil.\n";
	}

	return ovenStatus;
}
int enterOvenTemp() {
	int ovenHeat;

	cout << "What temperature (F)?\n";
	cin >> ovenHeat;

	if (ovenHeat == 1) {
		cout << "The oven is set to " << ovenHeat << " degree Fahrenheit.\n";
	}
	else {
		cout << "The oven is set to " << ovenHeat << " degrees Fahrenheit.\n";
	}

	return ovenHeat;
}

void primaryFunction() {
	string userString = "";
	int numCooking = 0;
	int numCooks = 0;
	int ovenSetting = 0;
	int ovenHeat = 0;

	while (userString != "0") {
		alphaMenu(1);
		cin >> userString;

		if (userString == "0") {
			break;
		}
		else if (userString == "1") {
			userString = "";
			alphaMenu(2);
			cin >> userString;

			if (userString == "1") {
				numCooking = enterNumCooking();
			}
			else if (userString == "2") {
				numCooks = enterNumCooks();
			}
			else if (userString == "3") {
				ovenSetting = enterOvenStatus();
				ovenHeat = enterOvenTemp();
			}
		}
		else if (userString == "2") {
			userString = "";
			alphaMenu(3);
			cin >> userString;

			if (userString == "1") {
				checkNumCooking(numCooking);
			}
			else if (userString == "2") {
				checkNumCooks(numCooks);
			}
			else if (userString == "3") {
				checkOvenStatus(ovenSetting);
				checkOvenTemp(ovenHeat);
			}
			cout << endl;
		}

		cout << endl;
	}
}

int main() {
	primaryFunction();
	return 0;
}