#include <iostream>
#include <vector>
#include "numberAlgorithms.h"

int main()
{
    numberAlgorithms userAlgorithms;
    int userNum = -1;
    int userMin = INT_MAX;
    int userMax = INT_MIN;

    std::cout << "Welcome to number sequence AI.\n";
    std::cout << "Please enter numbers; after each number hit enter and when finished, enter \"0\"\n";

    std::vector<int> userVector;

    while (userNum != 0) {
        std::cin >> userNum;
        userVector.push_back (userNum);
    }

    std::cout << "You've entered:\n";

    for (int i = 0; i < userVector.size() - 1; ++i) { //Displays numbers in the vector of user-entered values.
        std::cout << userVector.at(i) << std::endl;
    }

    userAlgorithms.SetVectorSize(userVector.size());
    userAlgorithms.GetVectorSize();

    for (int i = 0; i < userVector.size() - 1; ++i) { //Finds the minimum and maximum values.
        if (userVector.at(i) < userMin) {
            userMin = userVector.at(i);
        }
        if (userVector.at(i) > userMax) {
            userMax = userVector.at(i);
        }
    }
    userAlgorithms.SetMinAndMax(userMin, userMax);
    userAlgorithms.GetMinAndMax();

    return 0;
}
