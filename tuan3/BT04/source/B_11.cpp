#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    string Password[n];
    for (int i=0; i<n; i++) {
        cin >> Password[i];
    }
    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if ((Password[i].length() == Password[j].length()) && (Password[i].length()%2 == 1)) {
                bool check = true;
                for (int index = 0; index<Password[i].length(); index++) {
                    if (Password[i][index] != Password[j][Password[i].length()-1-index]) {
                        check = false;
                        break;
                    }
                }
                if (check == true) {
                    cout << Password[i].length() << ' ' << Password[i][Password[i].length()/2] << endl;
                }
            }
        }
    }
    return 0;
}