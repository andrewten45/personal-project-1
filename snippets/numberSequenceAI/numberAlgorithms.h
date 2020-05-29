#ifndef NUMBERALGORITHMS_H_INCLUDED
#define NUMBERALGORITHMS_H_INCLUDED
#include <vector>

class numberAlgorithms {
public:
    void SetMin();
    void SetMax();
    void GetMin();
    void GetMax();
    void GuessNumber();
    void SetNumSequence();
    void GetSizeNumSequence();
    void GetNumSequence();
private:
    int vectorSize = 0;
    int numMin;
    int numMax;
    int guessedNum;
    std::vector<int> numSequence;
    std::vector<int> guessedSequence;
};

#endif // NUMBERALGORITHMS_H_INCLUDED
