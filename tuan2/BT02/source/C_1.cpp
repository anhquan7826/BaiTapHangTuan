#include <iostream>

using namespace std;

bool check_nguyento(int a)
{
    if (a < 0) {a = a*(-1);}
    if (a == 0) {return false;}
    int i=2;
    while (i<a) {
        if (a%i == 0) {return false;}
        i++;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    if (check_nguyento(n)) {cout << "yes";} else {cout << "no";}
    cout << endl;
    system("pause");
    return 0;
}
