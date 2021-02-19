#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "nhap kich thuoc: ";
    int n;
    cin >> n;
    int star = 1;
    for (int i=n; i>0; i--) {
        cout << setw(i);
        for (int j=0; j<star; j++) {
            cout << '*';
        }
        cout << endl;
        star += 2;
    }
    system("pause");
    return 0;
}