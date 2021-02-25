#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

void turn_into_actual_minefield(char** field, int m, int n) {
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            int Count=0;
            if (*(*(field+i)+j) != '*') {
                for (int a=i-1; a<=i+1; a++) {
                    if (a<0) {continue;}
                    for (int b=j-1; b<=j+1; b++) {
                        if (b<0) {continue;}
                        if (*(*(field+a)+b) == '*') {
                            Count++;
                        }
                    }
                }
                *(*(field+i)+j) = (char)(Count+48);
            }
        }
    }
}

char** generate_minefield(int m, int n, int k) {
    char **generatedField = new char* [m];
    for (int i=0; i<m; i++) {
        *(generatedField+i) = new char [n];
    }
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            *(*(generatedField+i)+j) = '.';
        }
    }
    while (k != 0) {
        srand(k);
        int a = rand()%m;
        int b = rand()%n;
    //  cout << a << ' ' << b << endl;
        if (*(*(generatedField+a)+b) == '.') {
            *(*(generatedField+a)+b) = '*';
            k--;
        }
    }
    return generatedField;
}

void print_minefield(char** field, int m, int n) {
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cout << *(*(field+i)+j) << ' ';
        }
        cout << endl;
    }
}

int main() {
    int m, n, k;
    cout << "nhap kich thuoc: ";
    cin >> m >> n;
    cout << "nhap so luong bom: ";
    cin >> k;
    if (k > m*n) {
        cout << "so bom vuot qua gioi han!" << endl;
        return 0;
    }
    cout << "generating minefield..." << endl;
    char** mineField = generate_minefield(m, n, k);
    print_minefield(mineField, m, n);
    cout << "converting minefield..." << endl;
    turn_into_actual_minefield(mineField, m, n);
    print_minefield(mineField, m, n);
    return 0;
}