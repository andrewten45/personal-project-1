// Login manager by Andrew T
// This program stores login info from the user.
// WIP - Still in development and is not 100% functional.
#include <iostream>
#include <vector>

using namespace std;

struct login {
	string userName = "";
	string userPass = "";
};

void loginSave() {
	cout << "You have chosen to save a login.\n";
	//TODO: Enter code to save logins using the structure.
}

void loginView() {
	cout << "You have chosen to view logins.\n";
	//TODO: Enter code to view logins.
}

void loginMgr() {
	string userChoice;

	cout << "Welcome to the Login manager by Andrew T. You can save logins using this program. \n\n";

	while (true) {
		cout << "Enter 0 to quit.\n";
		cout << "Enter 1 to save a new login.\n";
		cout << "Enter 2 to view all of your logins.\n";
		cout << "Enter any other input to repeat the prompt.\n";
		cout << endl;

		cin >> userChoice;

		if (userChoice == "0") {
			break;
		}
		else if (userChoice == "1") {
			loginSave();
		}
		else if (userChoice == "2") {
			loginView();
		}
	}
}

int main()
{
	loginMgr();
	return 0;
}