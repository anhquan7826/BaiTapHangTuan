#include <iostream>

using namespace std;

const int EMPTY_LINE = 50;

void clear_screen() {
    for (int i=0; i<EMPTY_LINE; i++) {
        cout << endl;
    }
}

void swap(char &a, char &b) {
    char temp;
    temp = a;
    a = b;
    b = temp;
}
int size(char a[]) {
    int count = 0;
    while (*(a+count) != '\0') {
        count++;
    }
    return count;
}
void deleteChar(char a[], int pos) {
    for (int i=pos; i<size(a)-1; i++) {
        a[i] = a[i+1];
    }
    a[size(a)-1] = '\0';
}

void reverse(char a[]);
void delete_char(char a[], char c);
void pad_right(char a[], int n);
void pad_left(char a[], int n);
void truncate(char a[], int n);
bool is_palindrome(char a[]);
void trim_left(char a[]);
void trim_right(char a[]);

int main() {
    clear_screen();
    char *a = new char [1000];
    cout << "Nhap xau: ";
    cin >> a;
    bool quit = false;
    int option;
    int n;
    while (!quit) {
        clear_screen();
        cout << "0. quit" << endl
             << "1. reverse" << endl
             << "2. delete_char" << endl
             << "3. pad_right" << endl
             << "4. pad_left" << endl
             << "5. truncate" << endl
             << "6. trim_left" << endl
             << "7. trim_right" << endl;
        cout << endl;
        cout << "Xau hien tai: " << "\"" << a << "\"" << endl;
        if (is_palindrome(a)) {
            cout << "Xau nay la xau palindrome" << endl;
        } else {
            cout << "Xau nay khong la xau palindrome" << endl;
        }
        cout << "Chon che do: ";
        cin >> option;
        switch (option) {
            case 0:
                quit = true;
                break;
            case 1:
                reverse(a);
                break;
            case 2:
                cout << "Nhap ki tu can xoa: ";
                char c;
                cin >> c;
                delete_char(a, c);
                break;
            case 3:
                cout << "Nhap n: ";
                cin >> n;
                pad_right(a, n);
                break;
            case 4:
                cout << "Nhap n: ";
                cin >> n;
                pad_left(a, n);
                break;
            case 5:
                cout << "Nhap n: ";
                cin >> n;
                truncate(a, n);
                break;
            case 6:
                trim_left(a);
                break;
            case 7:
                trim_right(a);
                break;
        }
    }
    return 0;
}

void reverse(char a[]) {
    for (int i=0; i<size(a)/2; i++) {
        swap(a[i], a[size(a)-1-i]);
    }
}
void delete_char(char a[], char c) {
    for (int i=0; i<size(a); i++) {
        if (a[i] == c) {
            deleteChar(a, i);
        }
    }
}
void pad_right(char a[], int n) {
    if (size(a) >= n) {return;}
    for (int i=size(a); i<n; i++) {
        a[i] = ' ';
    }
}
void pad_left(char a[], int n) {
    if (size(a) >= n) {return;}
    int spaceCount = n-size(a);
    for (int j=0; j<spaceCount; j++) {
        for (int i=size(a); i>0; i--) {
            a[i] = a[i-1];
        }
        a[0] = ' ';
    }
}
void truncate(char a[], int n) {
    if (size(a) <= n) {return;}
    a[n] = '\0';
}

bool is_palindrome(char a[]) {
    bool check = true;
    for (int i=0; i<size(a)/2; i++) {
        if (a[i] != a[size(a)-1-i]) {
            check = false;
        }
    }
    return check;
}
void trim_left(char a[]) {
    while (a[0] == ' ') {
        deleteChar(a, 0);
    }
}
void trim_right(char a[]) {
    while (a[size(a)-1] == ' ') {
        deleteChar(a, size(a)-1);
    }
}