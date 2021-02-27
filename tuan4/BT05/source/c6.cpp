#include <iostream>

using namespace std;

int ucln(int a, int b) {
    int result;
    int c = a;
    if (b < a) {c = b;}
    for (int i=1; i<=c; i++) {
        if (a%i == 0 && b%i == 0) {
            result = i;
        }
    }
    return result;
}

int main() {
    int a, b;
    cout << "Nhap 2 so can tinh UCLN: ";
    cin >> a >> b;
    cout << "UCLN = " << ucln(a, b) << endl;
    if (ucln(a, b) == 1) {cout << a << " va " << b << " nguyen to cung nhau." << endl;}
    else {cout << a << " va " << b << " khong la nguyen to cung nhau." << endl;}
    return 0;
}