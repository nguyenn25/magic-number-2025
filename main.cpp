#include <iostream>
#include <cstdLib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;

int main() {
    // Random number between 1-10;
    srand(time(0));
    int max;
    cout << "What is the maximum number you want to guess?: " << endl;
    cin >> max;
    int magic = rand() % max + 1; // methods <> functions
    int guess;
    cout << "How many lives do you want?: ";
    int life;
    cin >> life;
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