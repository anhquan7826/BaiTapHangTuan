#include <iostream>

using namespace std;

char* concat(const char* a, const char* b) {
    char* combine = new char;
    int length_a = 0, length_b = 0;
    while (*(a+length_a) != '\0') {
        length_a++;
    }
    while (*(b+length_b) != '\0') {
        length_b++;
    }
    int i=0;
    while (i<length_a) {
        *(combine+i) = *(a+i);
        i++;
    }
    while (i<length_a+length_b) {
        *(combine+i) = *(b+(i-length_a));
        i++;
    }
    return combine;
}

int main() {
    char* a = new char;
    char* b = new char;
    cin >> a >> b;
    char* c = new char;
    c = concat(a, b);
    cout << c << endl;
    return 0;
}