#include <iostream>
#include <vector>

using namespace std;

bool kiemTra(int &k, int &n) {
    if (!(0 <= k && k <= n) && !(1 <= n && n <= 20)) {
        return false;
    }
    return true;
}

int giaiThua(int n) {
    int result = 1;
    for (int i=1; i<=n; i++) {
        result *= i;
    }
    return result;
}

int toHop(int k, int n) {
    return giaiThua(n)/(giaiThua(k)*giaiThua(n-k));
}

void nhapDuLieu(vector<int> &ketqua) {
    int k, n;
    while (k != -1 && n != -1) {
        cin >> k >> n;
        while ((k != -1 && n != -1) && !kiemTra(k, n)) {
            cout << "Vui long nhap lai: ";
            cin >> k >> n;
        }
        if (k != -1 && n != -1) {ketqua.push_back(toHop(k, n));}
    }
}

int main() {
    cout << "Nhap k va n (nhap -1 -1 de ket thuc!):" << endl;
    vector<int> ketqua;
    nhapDuLieu(ketqua);
    cout << "ket qua:" << endl;
    for (int i=0; i<ketqua.size(); i++) {
        cout << ketqua[i] << endl;
    }
    return 0;
}