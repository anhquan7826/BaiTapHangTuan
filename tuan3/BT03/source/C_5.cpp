#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

struct index {
    int begin;
    int end;
};

void print(int** a, int m, int n) {
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cout << setw(5) << a[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    int m, n;
    cin >> m >> n;
    int** a = new int* [m];
    for (int i=0; i<m; i++) {
        *(a+i) = new int [n];
    }
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            a[i][j] = 0;
        }
    }

    int number = 1;
    index colForward, colBackward, rowForward, rowBackward;

    colForward.begin = 0; colForward.end = n-1;
    colBackward.begin = n-1; colBackward.end = 0;

    rowForward.begin = 1; rowForward.end = m-2;
    rowBackward.begin = m-2; rowBackward.end = 1;

    int iCol = 0;
    int iRow = 0;
    while (number <= (m*n)) {
        for (iCol=colForward.begin; iCol<=colForward.end; ++iCol) {
            if (number <= m*n) {
            //    cout << iRow << ' ' << iCol << endl;
                a[iRow][iCol] = number;
                number++;
            //    print(a, m, n);
            } else break;
        }
        iCol--;
        for (iRow=rowForward.begin; iRow<=rowForward.end; ++iRow) {
            if (number <= m*n) {
            //    cout << iRow << ' ' << iCol << endl;
                a[iRow][iCol] = number;
                number++;
            //    print(a, m, n);
            } else break;
        }
        for (iCol=colBackward.begin; iCol>=colBackward.end; --iCol) {
            if (number <= m*n) {
            //    cout << iRow << ' ' << iCol << endl;
                a[iRow][iCol] = number;
                number++;
            //    print(a, m, n);
            } else break;
        }
        iCol++;
        for (iRow=rowBackward.begin; iRow>=rowBackward.end; --iRow) {
            if (number <= m*n) {
            //    cout << iRow << ' ' << iCol << endl;
                a[iRow][iCol] = number;
                number++;
            //    print(a, m, n);
            } else break;
        }
        iRow++;

        colForward.begin++; colForward.end--;
        colBackward.begin--; colBackward.end++;
        
        rowForward.begin++; rowForward.end--;
        rowBackward.begin--; rowBackward.end++;
    }
    print(a, m, n);
    system("pause");
    return 0;
}