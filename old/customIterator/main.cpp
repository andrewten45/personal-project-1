// Custom iterator by andrew
// This program lets the user output a message along with its iteration number for a set amount of times.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string messagePartOne;
    int numIterations;
    int count = 0;

    cout << "Please enter the first part of the message:\n\n";
    getline(cin, messagePartOne);

    cout << "Please enter how many iterations you would like:\n\n";
    cin >> numIterations;

    while (count < numIterations) {
        cout << messagePartOne << " " << count << endl;
        ++count;
    }

    cout << endl;
}
