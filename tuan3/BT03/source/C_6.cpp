#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int** initArr(const int m, const int n) {
    int** a = new int* [m];
    for (int i=0; i<m; i++) {
        *(a+i) = new int [n];
    }
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            a[i][j] = 0;
        }
    }
    return a;
}

int main() {
    int size;
ifUserIncorrectInput:
    cin >> size;
    if (size%2 == 0) {
        cout << "Nhap lai: ";
        goto ifUserIncorrectInput;
    }
    int sizeToInit = size+1;
    int** a = initArr(sizeToInit, sizeToInit);
    int number = 1;
    int iRow = 0;
    int iCol = sizeToInit/2;
    while (number <= size*size) {
        a[iRow][iCol] = number;
        if (iRow == 0) {
            if (iCol == sizeToInit-1) {
                iRow += 2;
                iCol--;
            } else {
                iRow = sizeToInit-1;
                a[iRow][iCol] = number;
            }
        } else {
            if (iCol == sizeToInit-1) {
                iCol = 0;
                a[iRow][iCol] = number;
            }
        }
        iRow--; iCol++;
        if (a[iRow][iCol] != 0) {
            iRow += 2;
            iCol--;
        }
        number++;
    }
    for (int i=0; i<sizeToInit-1; i++) {
        for (int j=1; j<sizeToInit; j++) {
            cout << setw(5) << a[i][j];
        }
        cout << endl;
    }
    system("pause");
    return 0;
}