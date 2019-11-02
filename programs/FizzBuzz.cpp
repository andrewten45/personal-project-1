// FizzBuzz.cpp : Plays the game of FizzBuzz up to 100.
//By Andrew Tennant

#include <iostream>

using namespace std;

int main()
{

	for (int i = 1; i <= 100; ++i) {

		string output = "";

		if ((i % 3) == 0) {
			output.append("Fizz");
		}
		if ((i % 5) == 0) {
			output.append("Buzz");
		}

		if (output == "") {
			cout << i;
		}

		cout << output << endl;

	}
}
