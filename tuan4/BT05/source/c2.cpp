#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <vector>

using namespace std;

int EMPTY_LINE = 30;

void generate_random_mine(vector<vector<char>> &field, int m, int n, int k);
void setup_tiles(vector<vector<char>> &field, int m, int n);
void print_field(vector<vector<char>> field, int m, int n);
void print_answer(vector<vector<char>> &hidden_field, vector<vector<char>> field, int x, int y, int m, int n);
void reveal_cell(vector<vector<char>> &hidden_field, vector<vector<char>> field, int x, int y, int m, int n);

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
    
    vector<vector<char>> hidden_field (n, vector<char> (m));
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            hidden_field[i][j] = '#';
        }
    }
    vector<vector<char>> field (n, vector<char> (m));
    
    cout << "generating minefield..." << endl;
    generate_random_mine(field, m, n, k);
    cout << "done!" << endl;
    cout << "converting minefield..." << endl;
    setup_tiles(field, m, n);
    cout << "done!" << endl;
    for (int i=0; i<EMPTY_LINE; i++) {
        cout << endl;
    }
    print_field(hidden_field, m, n);
    bool gameover = false;
    while (!gameover) {
        int x, y;
        cout << "nhap vi tri ban muon chon: ";
        cin >> x >> y;
        if (x == -1 && y == -1) {
            print_field(field, m, n);
            break;
        }
        while ((x<0 || x>=m) || (y<0 || y>=n)) {
            cout << "vui long nhap lai!" << endl;
            cin >> x >> y;
        }
        for (int i=0; i<EMPTY_LINE; i++) {
            cout << endl;
        }
        if (field[x][y] != '*') {
            reveal_cell(hidden_field, field, x, y, m, n);
            print_answer(hidden_field, field, x, y, m, n);
        } else {
            print_field(field, m, n);
            cout << "GAME OVER!" << endl;
            gameover = true;
        }
    }

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
            k--;
        }
    }
}

void print_field(vector<vector<char>> field, int m, int n) {
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

void print_answer(vector<vector<char>> &hidden_field, vector<vector<char>> field, int x, int y, int m, int n) {
    hidden_field[x][y] = '_';
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            if (hidden_field[i][j] != '_') {
                cout << hidden_field[i][j] << ' ';
            } else {
                cout << field[i][j] << ' ';
            }
        }
        cout << endl;
    }
}

void reveal_cell(vector<vector<char>> &hidden_field, vector<vector<char>> field, int x, int y, int m, int n) {
    hidden_field[x][y] = '_';
    if (field[x][y] == '0') {
        for (int a=x-1; a<=x+1; a++) {
            if (a<0 || a>=m) {continue;}
            for (int b=y-1; b<=y+1; b++) {
                if (b<0 || b>=n) {continue;}
                if (hidden_field[a][b] != '_') {
                    hidden_field[a][b] = '_';
                    if (field[a][b] == '0') {
                        reveal_cell(hidden_field, field, a, b, m, n);
                    }
                }
            }
        }
    }
}