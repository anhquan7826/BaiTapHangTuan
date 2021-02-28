#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int BinToDec(int n);
int DecToBin(int n);

int main() {
    cout << "Chon che do:" << endl;
    cout << "1. Co so 10 -> Co so 2." << endl;
    cout << "2. Co so 2  -> Co so 10." << endl;
    cout << "Lua chon: ";
    int mode;
    cin >> mode;
    while (mode != 1 && mode != 2) {
        cout << "Vui long nhap lai: ";
        cin >> mode;
    }
    int n;
    switch(mode) {
        case 1:
            cout << "Nhap so can chuyen: ";
            cin >> n;
            cout << "Ket qua: " << DecToBin(n) << endl;
            break;
        case 2:
            cout << "Nhap so can chuyen: ";
            cin >> n;
            cout << "Ket qua: " << BinToDec(n) << endl;
            break;
    }
    return 0;
}

int BinToDec(int bin) {
    int dec = 0;
    int i = 0;
    while (bin != 0) {
        int a = (bin%10)*pow(2, i);
        dec += a;
        bin /= 10;
        i++;
    }
    return dec;
}

int DecToBin(int dec) {
    int bin = 0;
    vector<int> _dec;
    while (dec != 0) {
        int a = dec%2;
        _dec.push_back(a);
        dec /= 2;
    }
    for (int i=_dec.size()-1; i>=0; i--) {
        bin = bin*10+_dec[i];
    }
    return bin;
}