#include <iostream>

using namespace std;

int main() {
    char input[2];
    cin >> input;
    for (int letter=0; letter<2; letter++) {
        for (int i=0; i<2; i++) {
            cout << input[letter] << input[i] << ' ';
        }
    }
    for (int letter=0; letter<2; letter++) {
        for (int i=0; i<2; i++) {
            for (int j=0; j<2; j++) {
                cout << input[letter] << input[i] << input[j] << ' ';
            }
        }
    }
    cout << endl;
    return 0;
}