#include <iostream>
#include <string>
#include <sstream>

using namespace std;

bool DoiXung(int b) {
    string a;
    stringstream X;
    X << b;
    X >> a;
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
    int testcase;
    cin >> testcase;
    int result[testcase];
    for (int i=0; i<testcase; i++) {
        result[i] = 0;
    }
    for (int i=0; i<testcase; i++) {
        int a, b;
        cin >> a >> b;
        for (int j=a; j<=b; j++) {
            if (DoiXung(j)) {
                result[i]++;
            }
        }
    }
    for (int i=0; i<testcase; i++) {
        cout << result[i] << endl;
    }
    system("pause");
    return 0;
}