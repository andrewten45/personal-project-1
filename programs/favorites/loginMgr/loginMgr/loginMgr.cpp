// Login manager by Andrew T
// This program stores login info from the user.
// WIP - May not function without errors.
#include <iostream>
#include <vector>

using namespace std;

void loginMgr() {
	string userNames[5];
	string userPasses[5];
	string userIn = "";
	string userIn2 = "";
	int userChoice;

	while (true) {
		for (int i = 0; i < 5; ++i) {
			userNames[i] = "Null";
			userPasses[i] = "Null";
		}

		cout << "Welcome to the Login manager by Andrew T. You can save 5 logins using this program. \n\n";
		cout << "Enter 1 to save a new login in the format: USERNAME PASSWORD\n";
		cout << "Enter 2 to save a login in a specific cell.\n";
		cout << "Enter 2 to view all of your logins.\n";
		cout << "Enter 3 to quit.\n";
		cout << endl;

		cin >> userChoice;

		if (userChoice == 1) {
			cout << "You have chosen to save a login.\n";
			cout << "Please enter a login in the format USERNAME PASSWORD.\n";

			cin >> userIn >> userIn2;

			//FIXME: Fix it such that I can use push_back to add new elements to the login vectors userNames and userPasses.
			/*
			userNames.push_back(userIn);
			userPasses.push_back(userIn2);
			*/
		}

		if (userChoice == 3) {
			for (int i = 0; i < 5; ++i) {
				cout << userNames[i] << " " << userPasses[i];
				cout << endl;
			}
		}

		if (userChoice == 4) {
			break;
		}
	}
}

int main()
{
	loginMgr();
	return 0;
}