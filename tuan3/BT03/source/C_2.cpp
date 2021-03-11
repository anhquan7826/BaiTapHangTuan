#include <iostream>
#include <string>

using namespace std;

bool DoiXung(string a) {
    bool check = true;
    int i = 0;
    int j = a.length()-1;
    while (i<a.length()/2) {
        if (a[i] != a[j]) {
            check = false;
            break;
        }
        i++; j--;
    }
    return check;
}

int main() {
    string a;
    cin >> a;
    if (DoiXung(a)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    system("pause");
    return 0;
}