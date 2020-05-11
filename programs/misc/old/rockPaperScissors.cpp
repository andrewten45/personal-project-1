// rockPaperScissors by Andrew T

#include <iostream>
using namespace std;

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

int newGame(string optionPlayer1, string optionPlayer2) {
    int result = 0;

    if (optionPlayer1 == optionPlayer2) {
        cout << "Draw.\n";
    }
    else {
        if (
            (optionPlayer1 == optionPlayer2) ||
            (optionPlayer1 == "1" && optionPlayer2 == "2") || 
            (optionPlayer1 == "2" && optionPlayer2 == "3") ||
            (optionPlayer1 == "3" && optionPlayer2 == "1")
            ) {
            cout << "Player 1 wins.\n";
            result = 1;
        }
        else if (
            (optionPlayer1 == optionPlayer2) ||
            (optionPlayer1 == "2" && optionPlayer2 == "1") ||
            (optionPlayer1 == "3" && optionPlayer2 == "2") ||
            (optionPlayer1 == "1" && optionPlayer2 == "3")
            ) {
            cout << "Player 2 wins.\n";
            result = 2;
        }
    }

    return result;
}

int qComputer() {
    //int number = (rand() % ((3 - 1 + 1) + 1));

    /*
    if (number == 1) {
        return "1";
    }
    else if (number == 2) {
        return "2";
    }
    else {
        return "3";
    }
    */
    
    return 1;
}

void rockPaperScissors() {
    menuOutput(1);
    string userIn = "";
    int scorePlayer1 = 0;
    int scorePlayer2 = 0;
    string choicePlayer1 = "";
    string choicePlayer2 = "";
    int result = 0;

    cin >> userIn;

    while (userIn != "0") {
        if (userIn == "1") {
            cout << "Player 1's turn.\n";
            menuOutput(2);
            cin >> choicePlayer1;

            cout << "Player 2's turn.\n";

            result = newGame(choicePlayer1, "1");
        }
        if (userIn == "2") {
            cout << "Player 1's turn.\n";
            menuOutput(2);
            cin >> choicePlayer1;
            
            cout << "Player 2's turn.\n";
            menuOutput(2);
            cin >> choicePlayer2;

            result = newGame(choicePlayer1, choicePlayer2);

            if (result == 1) {
                scorePlayer1++;
            }
            else if (result == 2) {
                scorePlayer2++;
            }
        }

        cout << "Player 1's score: " << scorePlayer1 << endl;
        cout << "Player 2's score: " << scorePlayer2 << endl;
        cin >> userIn;
    }
}

int main()
{
    rockPaperScissors();

    return 0;
}