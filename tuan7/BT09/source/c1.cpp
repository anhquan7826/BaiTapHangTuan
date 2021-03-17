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
int size(const char a[]) {
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
char* strcpy(const char* a) {
    char* result = new char;
    {
        int i=0;
        while (a[i] != '\0') {
            *(result+i) = *(a+i);
            i++;
        }
    }
    return result;
}

char* reverse(const char a[]);
char* delete_char(const char a[], const char c);
char* pad_right(const char a[], int n);
char* pad_left(const char a[], int n);
char* truncate(const char a[], int n);
char* trim_left(const char a[]);
char* trim_right(const char a[]);

int main() {
    clear_screen();
    char *a = new char [1000];
    cout << "Nhap xau: ";
    cin >> a;
    bool quit = false;
    int option;
    int n;
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
    cout << "Chon che do: ";
    cin >> option;
    switch (option) {
        case 0:
            quit = true;
            break;
        case 1:
            cout << reverse(a) << endl;
            break;
        case 2:
            cout << "Nhap ki tu can xoa: ";
            char c;
            cin >> c;
            cout << delete_char(a, c) << endl;
            break;
        case 3:
            cout << "Nhap n: ";
            cin >> n;
            cout << pad_right(a, n) << endl;
            break;
        case 4:
            cout << "Nhap n: ";
            cin >> n;
            cout << pad_left(a, n) << endl;
            break;
        case 5:
            cout << "Nhap n: ";
            cin >> n;
            cout << truncate(a, n) << endl;
            break;
        case 6:
            cout << trim_left(a) << endl;
            break;
        case 7:
            cout << trim_right(a) << endl;
            break;
    }
    return 0;
}

char* reverse(const char a[]) {
    char* result = new char;
    result = strcpy(a);
    for (int i=0; i<size(result)/2; i++) {
        swap(result[i], result[size(result)-1-i]);
    }
    return result;
}
char* delete_char(const char a[], char c) {
    char* result = new char;
    result = strcpy(a);
    for (int i=0; i<size(result); i++) {
        if (result[i] == c) {
            deleteChar(result, i);
        }
    }
    return result;
}
char* pad_right(const char a[], int n) {
    char* result = new char;
    result = strcpy(a);
    if (size(result) >= n) {return NULL;}
    for (int i=size(result); i<n; i++) {
        result[i] = ' ';
    }
    return result;
}
char* pad_left(const char a[], int n) {
    char* result = new char;
    result = strcpy(a);
    if (size(result) >= n) {return NULL;}
    int spaceCount = n-size(result);
    for (int j=0; j<spaceCount; j++) {
        for (int i=size(result); i>0; i--) {
            result[i] = result[i-1];
        }
        result[0] = ' ';
    }
    return result;
}
char* truncate(const char a[], int n) {
    char* result = new char;
    result = strcpy(a);
    if (size(result) <= n) {return NULL;}
    result[n] = '\0';
    return result;
}
char* trim_left(const char a[]) {
    char* result = new char;
    result = strcpy(a);
    while (result[0] == ' ') {
        deleteChar(result, 0);
    }
    return result;
}
char* trim_right(const char a[]) {
    char* result = new char;
    result = strcpy(a);
    while (result[size(result)-1] == ' ') {
        deleteChar(result, size(a)-1);
    }
    return result;
}