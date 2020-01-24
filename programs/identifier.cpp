// This program identifies a natural number with a fun meaning.

#include <iostream>

using namespace std;

int main()
{
	int userNum;

	cout << "Please enter a natural number to get a neat response: \n";

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
		break;
	case 4:
		cout << "4 is floored.\n";
		break;
	case 5:
		cout << "5 knows how to fly.\n";
		break;
	case 6:
		cout << "6 knows a few tricks.\n";
		break;
	case 7:
		cout << "7 knows how to get to heaven.\n";
		break;
	case 8:
		cout << "8 lets go of its hate.\n";
		break;
	case 9:
		cout << "9 is sublime.\n";
		break;
	case 10:
		cout << "10 is like a hen.\n";
		break;
	default:
		cout << "Unknown number.\n";
		break;
	}
}
