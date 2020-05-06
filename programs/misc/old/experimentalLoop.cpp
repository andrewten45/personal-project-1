// Experimental loop by Andrew T

#include <iostream>

using namespace std;

void userFunction() {
	char userChar;

	cout << "This is an experimental loop.\n";

	while(userChar != 'Y' && userChar != 'y') {
        for (int i = 0; i < 10000; ++i) {
                cout << i << endl;

            if (i % 5000 == 0 && i != 0) {
                cout << "Stop the loop? Y or N\n";
                cin >> userChar;

                if (userChar == 'Y' || userChar == 'y') {
                    break;
                }
            }
        }
	}
}

int main()
{
	userFunction();
	return 0;
}
