#include <iostream>

using namespace std;

bool majority(bool querry1, bool querry2, bool querry3) {
    return ((querry1 && querry2) || (querry2 && querry3) || (querry1 && querry3));
}

int main() {
    bool querry1, querry2, querry3;
    cin >> querry1 >> querry2 >> querry3;
    cout << boolalpha << majority(querry1, querry2, querry3) << endl;
    return 0;
}