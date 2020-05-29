#include <iostream>
#include "numberAlgorithms.h"
#include <vector>

void numberAlgorithms::SetMin() {
    numMin = numSequence.at(0);
    for (int i = 0; i < numSequence.size() - 1; ++i) {
        if (numSequence.at(i) < numMin) {
            numMin = numSequence.at(i);
        }
    }
}

void numberAlgorithms::SetMax() {
    numMax = numSequence.at(0);
    for (int i = 0; i < numSequence.size() - 1; ++i) {
        if (numSequence.at(i) > numMax) {
            numMax = numSequence.at(i);
        }
    }
}

void numberAlgorithms::GetMin() {
    std::cout << "Min number: " << numMin << std::endl;
}

void numberAlgorithms::GetMax() {
    std::cout << "Max number: " << numMax << std::endl;
}

void numberAlgorithms::GuessNumber() {
    //This function is intended to guess a number between the min and max. If incorrect, tries again; if correct, continues to the next one, and so on.
}

void numberAlgorithms::SetNumSequence() {
    int userNum = -1;

    std::cout << "Please enter numbers; after each number hit enter and when finished, enter \"0\"\n";

    while (userNum != 0) {
        std::cin >> userNum;
        numSequence.push_back (userNum);
    }

    std::cout << "You've entered:\n";
}

void numberAlgorithms::GetNumSequence() {
    for (int i = 0; i < numSequence.size() - 1; ++i) {
        std::cout << numSequence.at(i) << std::endl;
    }
}

void numberAlgorithms::GetSizeNumSequence() {
    std::cout << "Size of sequence: " << numSequence.size() - 1 << std::endl;
}
