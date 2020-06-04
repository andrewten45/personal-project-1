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

void numberAlgorithms::GuessNumbers() {
    //This function is intended to guess a number between the min and max. If incorrect, tries again; if correct, continues to the next one, and so on.

    for(int i = 0; i < numSequence.size() - 1; ++i) {
        guessCorrect = false;
        while(guessCorrect == false) {
            guessedNum = rand() % (numMax - numMin + 1) + numMin;
            std::cout << "Guess: " << guessedNum << std::endl;
            numAttempts++;

            if(guessedNum == numSequence.at(i)) {
                std::cout << "Match\n";
                guessCorrect = true;
                numMatches++;
                std::cout << "Clearing used number vector.\n";
                numsUsed.clear();
            }
            else {
                if(numsUsed.size() == 0) {
                    std::cout << "Brand new used number vector & new incorrect guess; trying again & adding it to the used number vector.\n";
                    numMisses++;
                    numsUsed.push_back(guessedNum);
                }
                else {
                    for(int i = 0; i < numsUsed.size(); ++i) {
                        if(guessedNum == numsUsed.at(i)) {
                            std::cout << "Guess already used.\n";
                        }
                        else {
                            std::cout << "New incorrect guess; trying again & adding it to the used number vector.\n";
                            numMisses++;
                            numsUsed.push_back(guessedNum);
                        }
                    }
                }
            }
            //NOTE: Current vector of used numbers is buggy; it does not appear to deal with duplicate guesses well.
        }
    }
    std::cout << "Attempts: " << numAttempts << std::endl;
    std::cout << "Matches: " << numMatches << std::endl;
    std::cout << "Misses: " << numMisses << std::endl;
    std::cout << "Success rate: " << ((numMatches + 0.1 - 0.1) / numAttempts) * 100 << "%.\n";
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
