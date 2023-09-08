// Login checker by Andrew T
// This program checks if the user's input matches the set username and password.

#include <iostream>

using namespace std;

int main()
{
	string logins[2][2];
	logins[0][0] = "username";
	logins[1][0] = "password";

	logins[0][1] = "admin";
	logins[1][1] = "adminpass";
	string userin = "";

	while (true) {
		cout << "Please enter the username:\n";
		cin >> userin;

		for (int i = 0; i < 2; ++i) {
			if (userin == logins[0][i]) {
				cout << "User found.\n\n";
				userin = "";
			}
			else {
				cout << "Checking cell... User not found.\n\n";
				continue;
			}
			break;
		}
	}
}
