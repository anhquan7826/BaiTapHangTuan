#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    int m=n+1;
    int b[m];
    for (int i=0; i<n; i++) {
        b[i] = 0;
    }
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            if (a[j] == i) {
                b[i]++;
            }
        }
    }
    bool check=false;
    for (int i=0; i<m; i++) {
        if (b[i] >= 2) {
            check = true;
            break;
        }
    }
    if (check) {cout << "Yes";} else {cout << "No";}
    cout << endl;
    system("pause");
    return 0;
}