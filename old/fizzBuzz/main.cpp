// fizzBuzz.cpp : Plays the game of FizzBuzz up to 100.
// By andrewten45, & borrowed from Tom Scott's video about the same type of program.

#include <iostream>

int main()
{
	for (int i = 1; i <= 100; ++i) {

		std::string emptyString = "";

		if ((i % 3) == 0) {
			emptyString.append("fizz");
		}
		if ((i % 5) == 0) {
			emptyString.append("buzz");
		}

		if (emptyString == "") {
			std::cout << i;
		}

		std::cout << emptyString << std::endl;
	}
}
