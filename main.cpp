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
    int life = 3;
    cout << "What is your guess: ";
    while (life > 0) {
        cin >> guess;
        if (magic == guess) { //assigns guess to magic
            cout << "You are a winner!" << endl;
            return 0;
        }
        else {
            cout << "Loser!" << endl;
            life -= 1;
            cout << "Guess again: ";
        }
    }
    cout << magic;
    return 0;
}