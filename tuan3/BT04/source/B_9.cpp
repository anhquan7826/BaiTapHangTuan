#include <iostream>
#include <cmath>

using namespace std;

struct position {
    int x;
    int y;
    void getPos(int _x, int _y) {
        x = _x;
        y = _y;
    }
};

int main() {
    int N;
    cin >> N;
    position queen[N];
    for (int i=0; i<N; i++) {
        int x, y;
        cin >> x >> y;
        queen[i].getPos(x, y);
    }
    for (int i=0; i<N-1; i++) {
        for (int j=i+1; j<N; j++) {
            if ((queen[i].x == queen[j].x) || (queen[i].y == queen[j].y)) {
                cout << "Yes" << endl;
                return 0;
            } else {
                if (abs(queen[i].x-queen[j].x) == abs(queen[i].y-queen[j].y)) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;
}