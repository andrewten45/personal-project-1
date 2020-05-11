// Kitchen helper by Andrew T
// This program is designed to help cooks in the kitchen.

#include <iostream>

using namespace std;

class Kitchen {
public:
	void SetNumCooking();
	void SetNumCooks();
	void SetOvenStatus();
	void SetOvenTemp();
	void GetNumCooking();
	void GetNumCooks();
	void GetOvenStatus();
	void GetOvenTemp();
	void SafetyCheck();

private:
	int cooking = 0;
	int cooks = 0;
	int status = 0;
	int ovenTemp = 0;
};

void AlphaMenu(int userOption) {
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
		cout << "Input 4 to check the safety status.\n";
		cout << endl;
		break;
	default:
		break;
	}
}

void Kitchen::GetNumCooking() {
	if (cooking == 0) {
		cout << "Nothing's cooking.\n";
	}
	else if (cooking == 1) {
		cout << "There's " << cooking << " thing cooking.\n";
	}
	else {
		cout << "There are " << cooking << " things cooking.\n";
	}
}

void Kitchen::GetNumCooks() {
	if (cooks == 0) {
		cout << "Nobody's cooking.\n";
	}
	else if (cooks == 1) {
		cout << "There's " << cooks << " cook working.\n";
	}
	else {
		cout << "There are " << cooks << " cooks working.\n";
	}
}

void Kitchen::GetOvenStatus() {
	if (status == 0) {
		cout << "Oven is off.\n";
	}
	else if (status == 1) {
		cout << "Oven is on, and set to bake.\n";
	}
	else if (status == 2) {
		cout << "Oven is on, and set to broil.\n";
	}
}

void Kitchen::GetOvenTemp() {
	if (ovenTemp == 1) {
		cout << "The oven is set to " << ovenTemp << " degree Fahrenheit.\n";
	}
	else {
		cout << "The oven is set to " << ovenTemp << " degrees Fahrenheit.\n";
	}
}

void Kitchen::SetNumCooking() {
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

	cooking = numCooking;
}

void Kitchen::SetNumCooks() {
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

	cooks = numCooks;
}

void Kitchen::SetOvenStatus() {
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

	status = ovenStatus;
}
void Kitchen::SetOvenTemp() {
	int ovenHeat;

	cout << "What temperature (F)?\n";
	cin >> ovenHeat;

	if (ovenHeat == 1) {
        ovenTemp = ovenHeat;
		cout << "The oven is set to " << ovenHeat << " degree Fahrenheit.\n";
	}
	else {
	    if (ovenHeat < 0) {
            cout << "Error: Oven heat cannot be negative.\n";
	    }
	    else if (ovenHeat > 1000) {
            cout << "Error: Oven heat cannot be greater than 1000.\n";
	    }
	    else {
	        ovenTemp = ovenHeat;
            cout << "The oven is set to " << ovenHeat << " degrees Fahrenheit.\n";
	    }
	}
}
void Kitchen::SafetyCheck() {
    cout << "Checking if the kitchen is safe.\n";
    if (cooks > 0 || (cooks == cooking && cooks == status)) {
        cout << "Kitchen is safe.\n";
    }
    else {
        if (cooking != 0) {
            cout << "WARNING: Items are cooking without cooks working.\n";
        }
        if (status != 0) {
            cout << "WARNING: Oven is on without cooks working.\n";
        }
    }
}

void primaryFunction() {
	string userString = "";
	Kitchen userKitchen;

	while (userString != "0") {
		AlphaMenu(1);
		cin >> userString;

		if (userString == "0") {
			break;
		}
		else if (userString == "1") {
			userString = "";
			AlphaMenu(2);
			cin >> userString;

			if (userString == "1") {
				userKitchen.SetNumCooking();
			}
			else if (userString == "2") {
				userKitchen.SetNumCooks();
			}
			else if (userString == "3") {
				userKitchen.SetOvenStatus();
				userKitchen.SetOvenTemp();
			}
		}
		else if (userString == "2") {
			userString = "";
			AlphaMenu(3);
			cin >> userString;

			if (userString == "1") {
				userKitchen.GetNumCooking();
			}
			else if (userString == "2") {
				userKitchen.GetNumCooks();
			}
			else if (userString == "3") {
				userKitchen.GetOvenStatus();
				userKitchen.GetOvenTemp();
			}
			else if (userString == "4") {
                userKitchen.SafetyCheck();
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
