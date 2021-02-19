#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "nhap kich thuoc: ";
    int n;
    cin >> n;
    int star = n+n-1;
    for (int i=1; i<=n; i++) {
        cout << setw(i);
        for (int j=0; j<star; j++) {
            cout << '*';
        }
        cout << endl;
        star -= 2;
    }
    system("pause");
    return 0;
}