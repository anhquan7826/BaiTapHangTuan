#include <iostream>
#include <stdlib.h>

using namespace std;

int rand(int n) {
    return rand()%n;
}

int main() {
    srand(time(0));
    cout << "Nhap gioi han: ";
    int n; cin >> n;
    cout << rand(n) << endl;
    return 0;
}