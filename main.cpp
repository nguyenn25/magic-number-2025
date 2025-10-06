#include <iostream>
#include <cstdLib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;

int main() {
    // Random number between 1-10;
    srand(time(0));
    int magic = rand() % 10 + 1; // methods <> functions
    int guess;
    cout << "What is your guess: ";
    cin >> guess;
    if (magic == guess) { //assigns guess to magic
        cout << "You are a winner!" << endl;
    }
    else {
        cout << "Loser!" << endl;
    }
    cout << magic;
    return 0;
}