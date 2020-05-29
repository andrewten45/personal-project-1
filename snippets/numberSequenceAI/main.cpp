//Number sequence AI by Andrew T. This program takes guesses on a sequence of numbers provided by the user.
#include <iostream>
#include <vector>
#include "numberAlgorithms.h"

int main()
{
    numberAlgorithms userAlgorithms;
    int userNum = -1;
    int userMin = INT_MAX;
    int userMax = INT_MIN;

    std::cout << "Welcome to the number sequence AI.\n";

    userAlgorithms.SetNumSequence();
    userAlgorithms.GetSizeNumSequence();
    userAlgorithms.SetMax();
    userAlgorithms.SetMin();
    userAlgorithms.GetMax();
    userAlgorithms.GetMin();

    return 0;
}
