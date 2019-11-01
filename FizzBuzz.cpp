// FizzBuzz.cpp : Plays the game of FizzBuzz up to 100.
//By Andrew Tennant

#include <iostream>

using namespace std;

int main()
{

	for (int i = 1; i <= 100; i++) {

		if ((i % 3) == 0) {
			cout << "Fizz\n";
		}
		else if ((i % 5) == 0) {
			cout << "Buzz\n";
		}
		else {
			cout << i << endl;
		}

	}
}
