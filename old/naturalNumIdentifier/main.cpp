// Natural Number Identifier by Andrew T
// This program identifies a natural number with a fun meaning.
// Exercise with switch statement syntax...

#include <iostream>

using namespace std;

int userNum;

void cases1To10() {
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
		break;
	}
}

void cases11To20() {
	switch (userNum) {
	case 11:
		cout << "11 turned it up to eleven.\n";
		break;
	case 12:
		cout << "12 has a shelf.\n";
		break;
	case 13:
		cout << "13...? let's not talk about 13...\n";
		break;
	case 14:
		cout << "14 was almost named Courtney.\n";
		break;
	case 15:
		cout << "15 is nifty.\n";
		break;
	case 16:
		cout << "16 can sick three.\n";
		break;
	case 17:
		cout << "17 knows how to bend seams.\n";
		break;
	case 18:
		cout << "18 can make a team.\n";
		break;
	case 19:
		cout << "19 can bite mean.\n";
		break;
	case 20:
		cout << "20 is plenty.\n";
		break;
	default:
		break;
	}
}

void cases21To30() {
    switch (userNum) {
case 21:
    cout << "21 can drink.\n";
    break;
case 22:
    cout << "22 hears a who.\n";
    break;
case 23:
    cout << "23 is just like me. \n";
    break;
case 24:
    cout << "24 saw this before. \n";
    break;
case 25:
    cout << "25 is alive. \n";
    break;
case 26:
    cout << "26 is plenty thick. \n";
    break;
case 27:
    cout << "27 is heavy leaven. \n";
    break;
case 28:
    cout << "28 ain't one to hate. \n";
    break;
case 29:
    cout << "29 is plenty fine. \n";
    break;
case 30:
    cout << "30 is a birdy. \b";
    break;}
}

void naturalNumberIdentifier() {
	cout << "Please enter a natural number to get a neat response: \n";

	cin >> userNum;
}

int main() {
	naturalNumberIdentifier();
	//cases1To10();
	//cases11To20();
	cases21To30();
	return 0;
}
