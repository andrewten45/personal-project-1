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

void loginMgr() {
	string userChoice;

	while (true) {
		cout << "Welcome to the Login manager by Andrew T. You can save logins using this program. \n\n";
		cout << "Enter 1 to save a new login.\n";
		cout << "Enter 2 to view all of your logins.\n";
		cout << "Enter any other input to quit.\n";
		cout << endl;

		cin >> userChoice;

		if (userChoice == "1") {
			loginSave();
		}
		if (userChoice == "2") {
			loginView();
		}
		else {
			break;
		}
	}
}

//FIXME: Why is the identifier not found?
void loginSave() {
	cout << "You have chosen to save a login.\n";
}

void loginView() {
	cout << "You have chosen to view logins.\n";
}

int main()
{
	loginMgr();
	return 0;
}