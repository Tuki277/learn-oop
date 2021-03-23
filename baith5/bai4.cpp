#include <bits/stdc++.h>

using namespace std;

class Electronic {
    protected:
        int congSuat;
        int dienAp;
    public:
        Electronic(int a, int b);
};

class MayGiat : public Electronic {
    int dungTich;
    char Loai[20];
    public:
        void xuat() {
            cout << "Cong xuat: " << congSuat << endl;
            cout << "Dien ap: " << dienAp << endl;
            cout << "Ding tich: " << dungTich << endl;
            cout << "Loai: " << Loai << endl;
        }
        MayGiat(int a, int b, int c, char *d);
};

class Tulanh : public Electronic {
    int dungTich;
    int soNgan;
    public:
        void xuat() {
            cout << "Cong xuat: " << congSuat << endl;
            cout << "Dien ap: " << dienAp << endl;
            cout << "Ding tich: " << dungTich << endl;
            cout << "So ngan: " << soNgan << endl;
        }
        Tulanh(int a, int b, int c, int d);
};

Electronic::Electronic(int a, int b) {
    congSuat = a;
    dienAp = b;
}

MayGiat :: MayGiat(int a, int b, int c, char *d) : Electronic (a, b) {
    dungTich = c;
    strcpy(Loai, d);
}

Tulanh :: Tulanh(int a, int b, int c, int d) : Electronic (a, b) {
    dungTich = c;
    soNgan = d;
}

int main () {
    MayGiat a(250, 220, 8, "Cua tren");
    Tulanh b(150, 220, 150, 4);
    a.xuat();
    b.xuat();

}