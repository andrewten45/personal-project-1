// kitchenHelper.cpp : This helps cooks in the kitchen with tips and other functions.
// By Andrew T

#include <iostream>

using namespace std;

void kitchenHelper() {
	int userIn = -1;
	int numCooking = 0;
	int numCooks = 0;

	cout << "Welcome to the Kitchen Helper program.\n";
	cout << "Input 0 to quit.\n";
	cout << "Input 1 for some cooking tips.\n";
	cout << "Input 2 to enter the amount of things cooking.\n";
	cout << "Input 3 to check how many things are cooking.\n";
	cout << "Input 4 to enter the number of cooks working.\n";
	cout << "Input 5 to check how many cooks are working.\n";

	cin >> userIn;

	while (userIn != 0) {
		if (userIn == 1) {
			cout << "Follow all recipe directions, especially if the creator is trustworthy.\n";
			cout << "Never abandon the things you're cooking; this will prevent fires.\n";
			cout << "Don't get too emotional when an accidents happen. You learn from them.\n";
			cout << endl;
		}
		else if (userIn == 2) {
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
		else if (userIn == 3) {
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
		else if (userIn == 4) {
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
		else if (userIn == 5) {
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

		cout << endl;
		cout << "Please enter an integer:\n";
		cin >> userIn;
	}
}

int main() {
	kitchenHelper();
	return 0;
}
