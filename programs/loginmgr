#include <iostream>

using namespace std;

int main()
{

	//[WIP] Login manager by Andrew T. It is designed to handle logins a person may want to store discretely.


	string userLogins[5][2];
	string userIn = "";
	int userChoice;

	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 1; ++j) {
			userLogins[i][j] = "Null";
		}
	}

	cout << "Welcome to the Login manager by Andrew T. You can save 5 logins using this program. \n\n";
	cout << "Enter 1 to save a login in the format: USERNAME PASSWORD\n";
	cout << "Enter 2 to view all of your logins.\n\n";

	cin >> userChoice;

	if (userChoice == 1) {
		cout << "You have chosen to save a login.\n";

		cout << "In which cell would you like this login? Choices are: 0 - 4\n\n";
		cin >> userChoice;

		cout << "Please enter USERNAME:\n\n";

		cin >> userIn;

		userLogins[userChoice][0] = userIn;


		cout << "Please enter PASSWORD:\n\n";

		cin >> userIn;

		userLogins[userChoice][1] = userIn;

		cout << "You entered: \n";
		cout << userLogins[userChoice][0] << endl;
		cout << userLogins[userChoice][1] << endl;
	}

	if (userChoice == 2) {
		for (int i = 0; i < 4; ++i) {
			for (int j = 0; i < 1; ++j) {
				cout << userLogins[i][j] << endl;
			}
			cout << endl;
		}
	}

	cout << "Thank you for using the program. The program will now close.\n";
}
