// This program identifies a natural number with a fun meaning.

#include <iostream>

using namespace std;

int main()
{
	int userNum;

	cout << "Please enter a natural number: \n";

	cin >> userNum;

	switch (userNum) {
		case 1:
			cout << "1 is fun.\n";
			break;
		case 2:
			cout << "2 is blue.\n";
			break;
		case 3:
			cout << "3 is free.\n";
	}
}
