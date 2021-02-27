#include <iostream>

using namespace std;

void printStar(int m, int n) {
    for (int i=0; i<m; i++) {
        cout << ' ';
    }
    for (int i=0; i<n; i++) {
        cout << '*';
    }
    cout << endl;
}

int main() {
    int line;
    cout << "Nhap so dong: ";
    cin >> line;
    for (int i=1; i<=line; i++) {
        printStar(line-i, i*2-1);
    }
    return 0;
}