#include <iostream>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    char field[m][n];
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cin >> field[i][j];
        }
    }
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            int Count=0;
            if (field[i][j] != '*') {
                for (int a=i-1; a<=i+1; a++) {
                    if (a<0) {continue;}
                    for (int b=j-1; b<=j+1; b++) {
                        if (b<0) {continue;}
                        if (field[a][b] == '*') {
                            Count++;
                        }
                    }
                }
                field[i][j] = (char)(Count+48);
            }
        }
    }
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cout << field[i][j] << ' ';
        }
        cout << endl;
    }
    system("pause");
    return 0;
}