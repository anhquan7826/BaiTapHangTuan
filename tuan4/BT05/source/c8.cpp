#include <iostream>
#include <cmath>

using namespace std;

int round_cmath(double n);
int round_no_cmath(double n);

int main() {
    double n;
    cout << "Nhap so can lam tron: ";
    cin >> n;
    cout << "Lam tron su dung cmath:       " << round_cmath(n) << endl;
    cout << "Lam tron khong su dung cmath: " << round_no_cmath(n) << endl;
    return 0;
}

int round_cmath(double n) {
    int _n = n*10;
    if (_n%10 < 5) {
        return floor(n);
    } else {
        return ceil(n);
    }
}

int round_no_cmath(double n) {
    int _n = n*10;
    if (_n%10 < 5) {
        return n;
    } else {
        return n+1;
    }
}