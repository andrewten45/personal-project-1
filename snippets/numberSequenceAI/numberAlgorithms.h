#ifndef NUMBERALGORITHMS_H_INCLUDED
#define NUMBERALGORITHMS_H_INCLUDED
#include <vector>

class numberAlgorithms {
public:
    void SetVectorSize(int num1);
    void GetVectorSize();
    void SetMin(int userNum);
    void SetMax(int userNum);
    void GetMinAndMax();
    void GuessNumber();
    void SetSequence();
    void GetSequence();
private:
    int vectorSize = 0;
    int numMin;
    int numMax;
    int guessedNum;
    std::vector<int> guessedSequence;
};

#endif // NUMBERALGORITHMS_H_INCLUDED
