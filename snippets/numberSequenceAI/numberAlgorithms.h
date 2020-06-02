#ifndef NUMBERALGORITHMS_H_INCLUDED
#define NUMBERALGORITHMS_H_INCLUDED
#include <vector>

class numberAlgorithms {
public:
    void SetMin();
    void SetMax();
    void GetMin();
    void GetMax();
    void GuessNumbers();
    void SetNumSequence();
    void GetSizeNumSequence();
    void GetNumSequence();
private:
    int numMin;
    int numMax;
    int guessedNum;
    bool guessCorrect;
    int numAttempts = 0;
    int numMatches = 0;
    int numMisses = 0;
    std::vector<int> numSequence;
    std::vector<int> guessedSequence;
};

#endif // NUMBERALGORITHMS_H_INCLUDED
