#include <iostream>
#include <vector>
#include "numberAlgorithms.h"

int main()
{
    numberAlgorithms userAlgorithms;
    int userNum = -1;
    std::cout << "Welcome to number sequence AI.\n";
    std::cout << "Please enter numbers; after each number hit enter and when finished, enter \"0\"\n";

    std::vector<int> userVector;

    while (userNum != 0) {
        std::cin >> userNum;
        userVector.push_back (userNum);
    }

    std::cout << "You've entered:\n";

    for (int i = 0; i < userVector.size() - 1; ++i) {
        std::cout << userVector.at(i) << std::endl;
    }

    userAlgorithms.SetVectorSize(userVector.size());

    std::cout << "Size of vector: ";
    userAlgorithms.GetVectorSize();

    return 0;
}
