#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

const int displayCol = 5;

void initArray(int a[], int n) {
    for (int i=0; i<n; i++) {
        a[i] = rand()%50;
    }
}

void listOfDIvisibleBy25(int a[], int n) {
    cout << "3 phan tu co tong chia het cho 25:" << endl;
    int col = 0;
    for (int i=0; i<n-2; i++) {
        for (int j=i+1; j<n-1; j++) {
            for (int k=j+i; k<n; k++) {
                if ((a[i]+a[j]+a[k])%25 == 0) {
                    cout << setw(2) << a[i] << ' ';
                    cout << setw(2) << a[j] << ' ';
                    cout << setw(2) << a[k];
                    cout << "    ";
                    col++;
                    if (col == displayCol) {cout << endl; col = 0;}
                }
            }
        }
    }
}

void printArray(int a[], int n) {
    for (int i=0; i<n; i++) {
        cout << a[i] << ' ';
    }
    cout << endl;
}

int main() {
    srand(time(0));
    int n;
    cout << "Nhap so phan tu: ";
    cin >> n;
    int arr[n];
    initArray(arr, n);
    printArray(arr, n);
    listOfDIvisibleBy25(arr,n);
    cout << endl;
    return 0;
}

