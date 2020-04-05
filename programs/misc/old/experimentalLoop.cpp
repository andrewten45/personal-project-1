// Experimental loop by Andrew T

#include <iostream>

using namespace std;

void userFunction() {
	char userChar;

	cout << "This is an experimental loop.\n";

	for (int i = 0; i < 10000; ++i) {
		cout << i << endl;

		if (i == 5000) {
			cout << "Stop the loop? Y or N\n";
			cin >> userChar;

			if (userChar == 'Y') {
				break;
			}
		}
	}
}

int main()
{
	userFunction();
	return 0;
}
