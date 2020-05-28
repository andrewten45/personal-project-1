#include <iostream>
#include "numberAlgorithms.h"
#include <vector>

void numberAlgorithms::SetVectorSize(int num1) {
    vectorSize = num1 - 1;
}

void numberAlgorithms::GetVectorSize() {
    std::cout << "Vector size: " << vectorSize << std::endl;
}

void numberAlgorithms::SetMinAndMax(int userMin, int userMax) {
    numMin = userMin;
    numMax = userMax;
}

void numberAlgorithms::GetMinAndMax() {
    std::cout << "Min number: " << numMin << std::endl;
    std::cout << "Max number: " << numMax << std::endl;
}

void numberAlgorithms::GuessNumber() {
    //Guesses a number between the min and max. If incorrect, tries again; if correct, continues to the next one, and so on.
}

void numberAlgorithms::SetSequence() {}

void numberAlgorithms::GetSequence() {}
