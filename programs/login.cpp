//Login by Andrew T. It is designed to log a person in their account based on a username and corresponding password.

#include <iostream>

using namespace std;

int main()
{
	string username = "username";
	string password = "password";
	string userin = "";

	while (true) {
		cout << "Please enter the username:\n";
		cin >> userin;

		if (userin == "username") {
			cout << "Correct username.\n\n";
			userin = "";
			break;
		}
		else {
			cout << "Incorrect username.\n\n";
			continue;
		}
	}

	while (true) {
		cout << "Please enter the password:\n";
		cin >> userin;

		if (userin == password) {
			cout << "Correct password.\n\n";
			userin = "";
			break;
		}
		else {
			cout << "Incorrect password.\n\n";
			continue;
		}
	}
}
