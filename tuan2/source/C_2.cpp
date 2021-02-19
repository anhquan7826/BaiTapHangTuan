#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "nhap kich thuoc: ";
    int n;
    cin >> n;
    for (int i=n; i>0; i--) {
        cout << setw(n-i+1);
        for (int j=0; j<i; j++) {
            cout << '*';
        }
        cout << endl;
    }
    system("pause");
    return 0;
}