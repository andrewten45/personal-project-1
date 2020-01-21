#include <iostream>

using namespace std;

int main()
{
	string logins[2][2];
	logins[0][0] = "username";
	logins[1][0] = "password";

	logins[0][1] = "username";
	logins[1][1] = "password";
	string userin = "";

	while (true) {
		cout << "Please enter the username:\n";
		cin >> userin;

		for (int i = 0; i < 2; ++i) {
			if (userin == logins[i][0]) {
				cout << "Correct username.\n\n";
				userin = "";
				break;
			}
			else {
				cout << "Incorrect username.\n\n";
				continue;
			}
			break;
		}
	}
}
