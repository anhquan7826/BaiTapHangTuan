#include <iostream>
#include <vector>

using namespace std;

void input(vector<int> &a) {
    cout << "nhap so phan tu: ";
    int n; cin >> n;
    cout << "nhap phan tu: ";
    for (int i=0; i<n; i++) {
        int in; cin >> in;
        a.push_back(in);
    }
}

void pushToTop(vector<int> &vt, int pos) {
    for (int i=pos; i>0; i--) {
        swap(vt[i], vt[i-1]);
    }
}

bool eq(vector<int> a, vector<int> b, int n) {
    if ((n>a.size()) || (n>b.size())) {return false;}
    int count = 0;
    int start_point_of_b = 0;
    for (int i=0; i<a.size(); i++) {
        for (int j=start_point_of_b; j<b.size(); j++) {
            if (a[i] == b[j]) {
                count++;
                pushToTop(b, j);
                start_point_of_b++;
                break;
            }
        }
    }
    cout << "so phan tu giong nhau: " << count << endl;
    if (count >= n) {return true;} else {return false;}
}

int main() {
    vector<int> a;
    vector<int> b;
    input(a);
    input(b);
    cout << "nhap querry: ";
    int similarCount;
    cin >> similarCount;
    cout << boolalpha << eq(a, b, similarCount) << endl;
    return 0;
}