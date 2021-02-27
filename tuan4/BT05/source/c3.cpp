#include <iostream>
#include <string>

const int DISPLAY_SIZE = 7;

using namespace std;

void UpperToLower(string& text) {
    for (int i=0; i<text.length(); i++) {
        if (65 <= text[i] && text[i] <= 90) {
            text[i] += 32;
        }
    }
}

string* bigLetter(const char& letter) {
    string* display = new string [DISPLAY_SIZE];
    switch (letter) {
        case 'a':
            display[0] = {"  ###  "};
            display[1] = {" #   # "};
            display[2] = {"#     #"};
            display[3] = {"#     #"};
            display[4] = {"#######"};
            display[5] = {"#     #"};
            display[6] = {"#     #"};
            break;
        case 'b':
            display[0] = {"###### "};
            display[1] = {"#     #"};
            display[2] = {"#     #"};
            display[3] = {"#  ### "};
            display[4] = {"#     #"};
            display[5] = {"#     #"};
            display[6] = {"###### "};
            break;
        case 'c':
            display[0] = {" ##### "};
            display[1] = {"#     #"};
            display[2] = {"#      "};
            display[3] = {"#      "};
            display[4] = {"#      "};
            display[5] = {"#     #"};
            display[6] = {" ##### "};
            break;
        case 'd':
            display[0] = {"###### "};
            display[1] = {"#     #"};
            display[2] = {"#     #"};
            display[3] = {"#     #"};
            display[4] = {"#     #"};
            display[5] = {"#     #"};
            display[6] = {"###### "};
            break;
        case 'e':
            display[0] = {"#######"};
            display[1] = {"#      "};
            display[2] = {"#      "};
            display[3] = {"#######"};
            display[4] = {"#      "};
            display[5] = {"#      "};
            display[6] = {"#######"};
            break;
        case 'f':
            display[0] = {"#######"};
            display[1] = {"#      "};
            display[2] = {"#      "};
            display[3] = {"#######"};
            display[4] = {"#      "};
            display[5] = {"#      "};
            display[6] = {"#      "};
            break;
        case 'g':
            display[0] = {" ##### "};
            display[1] = {"#     #"};
            display[2] = {"#      "};
            display[3] = {"#      "};
            display[4] = {"#   ###"};
            display[5] = {"#     #"};
            display[6] = {" ##### "};
            break;
        case 'h':
            display[0] = {"#     #"};
            display[1] = {"#     #"};
            display[2] = {"#     #"};
            display[3] = {"#######"};
            display[4] = {"#     #"};
            display[5] = {"#     #"};
            display[6] = {"#     #"};
            break;
        case 'i':
            display[0] = {"#######"};
            display[1] = {"   #   "};
            display[2] = {"   #   "};
            display[3] = {"   #   "};
            display[4] = {"   #   "};
            display[5] = {"   #   "};
            display[6] = {"#######"};
            break;
        case 'j':
            display[0] = {"#######"};
            display[1] = {"   #   "};
            display[2] = {"   #   "};
            display[3] = {"   #   "};
            display[4] = {"   #   "};
            display[5] = {"#  #   "};
            display[6] = {" ##    "};
            break;
        case 'k':
            display[0] = {"#     #"};
            display[1] = {"#    # "};
            display[2] = {"#   #  "};
            display[3] = {"####   "};
            display[4] = {"#   #  "};
            display[5] = {"#    # "};
            display[6] = {"#     #"};
            break;
        case 'l':
            display[0] = {"#      "};
            display[1] = {"#      "};
            display[2] = {"#      "};
            display[3] = {"#      "};
            display[4] = {"#      "};
            display[5] = {"#      "};
            display[6] = {"#######"};
            break;
        case 'm':
            display[0] = {"#     #"};
            display[1] = {"##   ##"};
            display[2] = {"# # # #"};
            display[3] = {"#  #  #"};
            display[4] = {"#     #"};
            display[5] = {"#     #"};
            display[6] = {"#     #"};
            break;
        case 'n':
            display[0] = {"#     #"};
            display[1] = {"##    #"};
            display[2] = {"# #   #"};
            display[3] = {"#  #  #"};
            display[4] = {"#   # #"};
            display[5] = {"#    ##"};
            display[6] = {"#     #"};
            break;
        case 'o':
            display[0] = {" ##### "};
            display[1] = {"#     #"};
            display[2] = {"#     #"};
            display[3] = {"#     #"};
            display[4] = {"#     #"};
            display[5] = {"#     #"};
            display[6] = {" ##### "};
            break;
        case 'p':
            display[0] = {"###### "};
            display[1] = {"#     #"};
            display[2] = {"#     #"};
            display[3] = {"###### "};
            display[4] = {"#      "};
            display[5] = {"#      "};
            display[6] = {"#      "};
            break;
        case 'q':
            display[0] = {" ##### "};
            display[1] = {"#     #"};
            display[2] = {"#     #"};
            display[3] = {"#     #"};
            display[4] = {"#   # #"};
            display[5] = {"#    ##"};
            display[6] = {" ######"};
            break;
        case 'r':
            display[0] = {"###### "};
            display[1] = {"#     #"};
            display[2] = {"#     #"};
            display[3] = {"###### "};
            display[4] = {"#   #  "};
            display[5] = {"#    # "};
            display[6] = {"#     #"};
            break;
        case 's':
            display[0] = {" ##### "};
            display[1] = {"#     #"};
            display[2] = {"#      "};
            display[3] = {" ##### "};
            display[4] = {"      #"};
            display[5] = {"#     #"};
            display[6] = {" ##### "};
            break;
        case 't':
            display[0] = {"#######"};
            display[1] = {"   #   "};
            display[2] = {"   #   "};
            display[3] = {"   #   "};
            display[4] = {"   #   "};
            display[5] = {"   #   "};
            display[6] = {"   #   "};
            break;
        case 'u':
            display[0] = {"#     #"};
            display[1] = {"#     #"};
            display[2] = {"#     #"};
            display[3] = {"#     #"};
            display[4] = {"#     #"};
            display[5] = {"#     #"};
            display[6] = {" ##### "};
            break;
        case 'v':
            display[0] = {"#     #"};
            display[1] = {"#     #"};
            display[2] = {"#     #"};
            display[3] = {"#     #"};
            display[4] = {" #   # "};
            display[5] = {"  # #  "};
            display[6] = {"   #   "};
            break;
        case 'w':
            display[0] = {"#     #"};
            display[1] = {"#     #"};
            display[2] = {"#     #"};
            display[3] = {"#  #  #"};
            display[4] = {"# # # #"};
            display[5] = {"##   ##"};
            display[6] = {"#     #"};
            break;
        case 'x':
            display[0] = {"#     #"};
            display[1] = {"#     #"};
            display[2] = {" #   # "};
            display[3] = {"  ###  "};
            display[4] = {" #   # "};
            display[5] = {"#     #"};
            display[6] = {"#     #"};
            break;
        case 'y':
            display[0] = {"#     #"};
            display[1] = {" #   # "};
            display[2] = {"  # #  "};
            display[3] = {"   #   "};
            display[4] = {"   #   "};
            display[5] = {"   #   "};
            display[6] = {"   #   "};
            break;
        case 'z':
            display[0] = {"#######"};
            display[1] = {"     # "};
            display[2] = {"    #  "};
            display[3] = {"   #   "};
            display[4] = {"  #    "};
            display[5] = {" #     "};
            display[6] = {"#######"};
            break;
    }
    return display;
}

int main() {
    string word;
    cin >> word;
    UpperToLower(word);
    string display[DISPLAY_SIZE];
    for (int letterIndex=0; letterIndex<word.length(); letterIndex++) {
        string* letter = bigLetter(word[letterIndex]);
        for (int line=0; line<DISPLAY_SIZE; line++) {
            display[line] = display[line] + letter[line] + "  ";
        }
    }
    for (int i=0; i<DISPLAY_SIZE; i++) {
        cout << display[i] << endl;
    }
    system("pause");
    return 0;
}