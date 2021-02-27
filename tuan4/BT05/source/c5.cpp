#include <iostream>
#include <cmath>

using namespace std;

bool checkPrime(int n) {
    if (n <= 1) {return false;}
    bool check = true;
    for (int i=2; i<=sqrt(n); i++) {
        if (n%i == 0) {check = false;}
    }
    return check;
}

int main() {
    int n;
    cout << "Nhap so can kiem tra: ";
    cin >> n;
    if (checkPrime(n)) {
        cout << n << " la so nguyen to!" << endl;
    } else {
        cout << n << " khong la so nguyen to!" << endl;
    }
    cout << "Cac so nguyen to nho hon " << n << " la: ";
    for (int i=2; i<=n; i++) {
        if (checkPrime(i)) {cout << i << ' ';}
    }
    cout << endl;
    return 0;
}