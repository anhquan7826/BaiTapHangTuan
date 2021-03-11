#include <iostream>
#include <unistd.h>

using namespace std;

const int EMPTY_LINE = 50;

const unsigned int microsecond = 1000000;

void clear_screen() {
    for (int i=0; i<EMPTY_LINE; i++) {
        cout << endl;
    }
}

class Rabbit {
    private:
        int position;
    public:
        Rabbit() {
            position = 0;
        }
        int getPos() {
            return position;
        }
        void getRandomMove() {
            double var = ((double)rand()/RAND_MAX)*100;
            if (var < 20) {
                slideDown(); // 20%
            } else if (var < 50) {
                goForw_Short(); // 30%
            } else {
                goForw_Long(); // 50%
            }
        }
        void resetPos() {
            position = 0;
        }
        void goForw_Long() {
            position += 3;
        }
        void goForw_Short() {
            position += 1;
        }
        void slideDown() {
            position -= 6;
        }
};

class Tortoise {
    private:
        int position;
    public:
        Tortoise() {
            position = 0;
        }
        int getPos() {
            return position;
        }
        void resetPos() {
            position = 0;
        }
        void getRandomMove() {
            double var = ((double)rand()/RAND_MAX)*100;
            if (var < 10) {
                slideDown_Long(); // 10%
            } else if (var < 30) {
                Sleep(); // 20%
            } else if (var < 50) {
                goForw_Long(); // 20%
            } else if (var < 70) {
                slideDown_Short(); // 20%
            } else {
                goForw_Long(); // 30%
            }
        }
        void Sleep() {
            position += 0;
        }
        void goForw_Long() {
            position += 9;
        }
        void goForw_Short() {
            position += 1;
        }
        void slideDown_Long() {
            position -= 12;
        }
        void slideDown_Short() {
            position -= 2;
        }
};

int getRandom() {

}

int main() {
    Rabbit Tho;
    Tortoise Rua;
    clear_screen();
    cout << "Vi tri cua Rua: " << Rua.getPos() << endl;
    cout << "Vi tri cua Tho: " << Tho.getPos() << endl;
    while (Tho.getPos()<70 && Rua.getPos()<70) {
        clear_screen();
        Tho.getRandomMove();
        Rua.getRandomMove();
        if (Tho.getPos() < 0) {
            Tho.resetPos();
        }
        if (Rua.getPos() < 0) {
            Tho.resetPos();
        }
        cout << "Vi tri cua Rua: " << Rua.getPos() << endl;
        cout << "Vi tri cua Tho: " << Tho.getPos() << endl;
        usleep(1*microsecond);
    }
    if (Tho.getPos() >= 70) {
        cout << "Tho thang!" << endl;
    }
    if (Rua.getPos() >= 70) {
        cout << "Rua thang!" << endl;
    }
    return 0;
}