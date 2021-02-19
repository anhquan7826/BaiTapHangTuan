#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string NumToText(int num) {
    switch (num) {
        case 1:
            return "one";
            break;
        case 2:
            return "two";
            break;
        case 3:
            return "three";
            break;
        case 4:
            return "four";
            break;
        case 5:
            return "five";
            break;
        case 6:
            return "six";
            break;
        case 7:
            return "seven";
            break;
        case 8:
            return "eight";
            break;
        case 9:
            return "nine";
            break;
        case 10:
            return "ten";
            break;
        case 11:
            return "eleven";
            break;
        case 12:
            return "twelve";
            break;
        case 13: 
            return "thirteen";
            break;
        case 14:
            return "fourteen";
            break;
        case 15:
            return "fifteen";
            break;
        case 16:
            return "sixteen";
            break;
        case 17:
            return "seventeen";
            break;
        case 18:
            return "eighteen";
            break;
        case 19:
            return "nineteen";
            break;
        case 20:
            return "twenty";
            break;
        case 30:
            return "thirty";
            break;
        case 40:
            return "forty";
            break;
        case 50:
            return "fifty";
            break;
        case 60:
            return "sixty";
            break;
        case 70:
            return "seventy";
            break;
        case 80:
            return "eighty";
            break;
        case 90:
            return "ninety";
            break;
    }
    return " ";
}

int StringToInt(string a) {
    stringstream X;
    X << a;
    int n;
    X >> n;
    return n;
}

void read3Numbers(int number) {
    int a, b, c;
    a = number/100; number %= 100;
    b = number/10; number %= 10;
    c = number;
    if (a != 0) {
        if (a > 1) {
            cout << NumToText(a) << " hundreds ";
        } else {
            cout << NumToText(a) << " hundred ";
        }
    }
    if (a != 0  && (b != 0 || c != 0)) {
        cout << "and ";
    }
    if (b == 0) {
        cout << NumToText(c);
    } else {
        if (b == 1) {
            cout << NumToText(b*10+c);
        } else {
            cout << NumToText(b*10) << ' ' << NumToText(c);
        }
    }
}

int main() {
    string number;
    cin >> number;
    if (number[0] == '-') {
        cout << "negative ";
        number.erase(0, 1);
    }
    while (number.length() != 0) {
        int Count = number.length()%3;
        if (Count == 0) {
            Count = 3;
        }
        read3Numbers(StringToInt(number.substr(0, Count)));
        if ((number.length()/3 == 3) || (number.length()/3 == 2 && number.length()%3 != 0)) {
            if (StringToInt(number.substr(0, Count)) != 1) {
                cout << " millions ";
            } else {
                cout << " million ";
            }
        } else {
            if ((number.length()/3 == 2) || (number.length()/3 == 1 && number.length()%3 != 0)) {
                if (StringToInt(number.substr(0, Count)) != 1) {
                    cout << " thousands ";
                } else {
                    cout << " thousand ";
                }
            }
        }
        number.erase(0, Count);
    }
    cout << endl;
    system("pause");
    return 0;
}