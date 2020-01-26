// identifierNumShapes.cpp : This program identifies a set number of shapes that can be drawn based on the user's input.
// By Andrew T

#include <iostream>

using namespace std;

void identifierNumShapes() {
	int numPoints;
	
	cout << "Please enter the number of points you have:\n";
	cin >> numPoints;

	cout << endl << endl;

	cout << "You can make " << numPoints << " points.\n";
	cout << "You can make " << numPoints / 2 << " lines.\n";
	cout << "You can make " << numPoints / 3 << " rectangular prisms or cubes.\n";
}

int main() {
	identifierNumShapes();
	return 0;
}
