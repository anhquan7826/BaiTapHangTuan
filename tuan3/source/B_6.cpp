#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    int i, j, k;
    for (i=0; i<n-2; i++) {
        for (j=i+1; j<n-1; j++) {
            for (k=j+1; k<n; k++) {
                if (a[i]+a[j]+a[k] == 0) {
                    cout << a[i] << ' ' << a[j] << ' ' << a[k] << endl;
                }
            }
        }
    }
    return 0;
}