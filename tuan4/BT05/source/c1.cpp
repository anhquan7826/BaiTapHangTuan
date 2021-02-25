#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <vector>

using namespace std;

void generate_random_mine(vector<vector<char>> &field, int m, int n, int k);
void setup_tiles(vector<vector<char>> &field, int m, int n);
void print_field(vector<vector<char>> &field, int m, int n);
void render_game();

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
    vector<vector<char>> field (n, vector<char> (m));
    cout << "generating minefield..." << endl;
    generate_random_mine(field, m, n, k);
    cout << "done!" << endl;
    print_field(field, m, n);
    cout << "converting minefield..." << endl;
    setup_tiles(field, m, n);
    cout << "done!" << endl;
    print_field(field, m, n);
    return 0;
}

void generate_random_mine(vector<vector<char>> &field, int m, int n, int k) {
    srand(time(0));
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            field[i][j] = '.';
        }
    }
    while (k != 0) {
        int a = rand()%m;
        int b = rand()%n;
        if (field[a][b] != '*') {
            field[a][b] = '*';
            cout << k << endl;
            k--;
        }
    }
}

void print_field(vector<vector<char>> &field, int m, int n) {
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cout << field[i][j] << ' ';
        }
        cout << endl;
    }
}

void setup_tiles(vector<vector<char>> &field, int m, int n) {
    int Count;
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            Count=0;
            if (field[i][j] != '*') {
                for (int a=i-1; a<=i+1; a++) {
                    if (a<0 || a>=m) {continue;}
                    for (int b=j-1; b<=j+1; b++) {
                        if (b<0 || b >= n) {continue;}
                        if (field[a][b] == '*') {
                            Count++;
                        }
                    }
                }
                field[i][j] = (char)(Count+48);
            }
        }
    }
}