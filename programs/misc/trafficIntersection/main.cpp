//Traffic intersection by Andrew T, which simulates a traffic light.
#include <iostream>
#include <chrono>
#include "trafficIntersection.h"
using namespace std;

void menuOutput(int menuNum) {
    switch (menuNum) {
    case 0:
        cout << "==================||==========================\n";
        cout << "Welcome to traffic intersection simulator.\n";
        menuOutput(1);
        break;
    case 1:
        cout << "--------------------------------------------------------\n";
        break;
    case 2:
        cout << "Enter 0 to quit.\n";
        cout << "Enter 1 to operate at a fixed interval of your choosing.\n";
        cout << "Enter 2 to operate based on traffic detection.\n";
        cout << "Enter 3 to operate based on statistical prediction.\n";
        menuOutput(1);
        break;
    }
}

int main()
{
    string userOption = "";
    trafficIntersection userIntersection;
    menuOutput(0);
    menuOutput(2);

    getline(cin, userOption);

    if(userOption == "1") {
        int numCycles = 0;
        int userNum1 = 0;
        int userNum2 = 0;

        cout << "Enter the number of cycles:\n";
        cin >> numCycles;
        cout << "Enter length of red/green lights:\n";
        cin >> userNum1;
        cout << "Enter length of yellow light:\n";
        cin >> userNum2;

        for(int i = 0; i < numCycles; ++i) {
            userIntersection.CycleLightColors(userNum1, userNum2);
        }
    }
    else if (userOption == "2") {
        cout << "Option 2.\n";
    }
    else if (userOption == "3") {
        cout << "Option 3.\n";
    }

    return 0;
}
