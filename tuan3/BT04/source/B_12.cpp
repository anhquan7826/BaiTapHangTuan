#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    bool Array[n+1];
    for (int i=0; i<=n; i++) {
        Array[i] = true;
    }
    Array[0] = false;
    Array[1] = false;
    for (int i=2; i<n; i++) {
        if (Array[i] == true) {
            for (int j=i+1; j<=n; j++) {
                if (j%i == 0) {
                    Array[j] = false;
                }
            }
        }
    }
    for (int i=0; i<=n; i++) {
        if (Array[i] == true) {
            cout << i << endl;
        }
    }
    return 0;
}