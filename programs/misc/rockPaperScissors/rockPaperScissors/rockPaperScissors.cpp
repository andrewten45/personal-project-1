// rockPaperScissors by Andrew T

#include <iostream>
using namespace std;
const int numLastOption = 3;

int stringToIntOption(string userString) {
    if (userString == "1") {
        return 1;
    }
    else if (userString == "2") {
        return 2;
    }
    else if (userString == "3") {
        return 3;
    }
}

void menuOutput(int userNum) {
    switch (userNum) {
    case 1:
        cout << "Welcome to the rock paper scissors program by Andrew T.\n";
        cout << "Enter 0 to quit.\n";
        cout << "Enter 1 to play with the computer.\n";
        cout << "Enter 2 to play with another player.\n";
        break;
    case 2:
        cout << "Enter 1 for: Rock.\n";
        cout << "Enter 2 for: Paper.\n";
        cout << "Enter 3 for: Scissors.\n";
        break;
    }
}

//FIXME: This function outputs "Draw" every time. Why?
int newGame(int optionPlayer1, int optionPlayer2) {
    int result = 0;

    if (optionPlayer1 == optionPlayer2) {
        cout << "Draw.\n";
    }
    else {
        if ((optionPlayer1 == optionPlayer2--) || ((optionPlayer1 == numLastOption && optionPlayer2 == 1))) {
            cout << "Player 1 wins.\n";
            result = 1;
        }
        else {
            cout << "Player 2 wins.\n";
            result = 2;
        }
    }

    return result;
}

void rockPaperScissors() {
    menuOutput(1);
    string userIn = "";
    int scorePlayer1 = 0;
    int scorePlayer2 = 0;
    string choicePlayer1 = "";
    string choicePlayer2 = "";
    int numChoicePlayer1 = 0;
    int numChoicePlayer2 = 0;
    int result = 0;

    cin >> userIn;

    while (userIn != "0") {
        if (userIn == "2") {
            cout << "Player 1's turn.\n";
            menuOutput(2);
            cin >> choicePlayer1;
            numChoicePlayer1 == stringToIntOption(choicePlayer1);
            
            cout << "Player 2's turn.\n";
            menuOutput(2);
            cin >> choicePlayer2;
            numChoicePlayer2 == stringToIntOption(choicePlayer2);

            result = newGame(numChoicePlayer1, numChoicePlayer2);

            if (result == 1) {
                scorePlayer1++;
            }
            else if (result == 2) {
                scorePlayer2++;
            }
        }

        cin >> userIn;
    }
}

int main()
{
    rockPaperScissors();

    return 0;
}