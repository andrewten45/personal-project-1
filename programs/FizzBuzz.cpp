// FizzBuzz.cpp : Plays the game of FizzBuzz up to 100.
// By Andrew Tennant, & borrowed by Tom Scott's video about the same type of program.

#include <iostream>

using namespace std;

int main()
{
	for (int i = 1; i <= 100; ++i) {

		string emptyString = "";

		if ((i % 3) == 0) {
			emptyString.append("Fizz");
		}
		if ((i % 5) == 0) {
			emptyString.append("Buzz");
		}

		if (emptyString == "") {
			cout << i;
		}

		cout << emptyString << endl;
	}
}
