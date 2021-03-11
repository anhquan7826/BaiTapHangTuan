#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

const int EMPTY_LINE = 50;

void clear_screen() {
    for (int i=0; i<EMPTY_LINE; i++) {
        cout << endl;
    }
}

int rollDice() {
    return rand()%6+1;
}

int main() {
    srand(time(0));
    clear_screen();
    int SumOfP1 = 0;
    int SumOfP2 = 0;
    int P1, P2;
    while (SumOfP1 < 100 || SumOfP2 < 100) {
        clear_screen();
        cout << "Player 1 total points: " << SumOfP1 << endl;
        cout << "Player 2 total points: " << SumOfP2 << endl;
        cout << "Enter 1 to roll!" << endl;
        cout << "Player 1: "; cin >> P1;
        cout << "Player 2: "; cin >> P2;
        SumOfP1 += rollDice();
        SumOfP2 += rollDice();
    }
    clear_screen();
    if (SumOfP1 > SumOfP2) {cout << "Player 1 win!" << endl;}
    if (SumOfP1 < SumOfP2) {cout << "Player 2 win!" << endl;}
    return 0;
}