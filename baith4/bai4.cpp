#include <bits/stdc++.h>

using namespace std;

class PTB2 {
    private:
        int a, b, c;
    public:
        void nhap ();
        void xuat ();
        void tinh ();
        PTB2();
        PTB2(int x, int y, int Z);
};

void PTB2::nhap() {
    cout << "Nhap vao a : ";
    cin >> a;
    cout << "Nhap vao b : ";
    cin >> b;
    cout << "Nhap vao c : ";
    cin >> c;
}

void PTB2::xuat () {
    cout << " Phuong trinh = " << a << "^2 + " << b << " + " << c << " = 0" << endl;
}

void PTB2::tinh () {
    float delta = b*b - 4 * a * c;
    if (delta < 0) {
        cout << "Phuong trinh vo nghiem";
    } else if (delta == 0) {
        cout << "Phuong trinh co nghiem kep = " << -b/(2*a);
    } else {
        cout << "Phuong trinh co nghiem x1 = " << ( (-b + sqrt(delta)) / (2*a)) << endl;
        cout << "Phuong trinh co nghiem x2 = " << ( (-b - sqrt(delta)) / (2*a)) << endl;
    }
}

PTB2::PTB2() {
    a = b = c = 0;
}

PTB2::PTB2(int x, int y, int z) {
    a = x;
    b = y;
    c = z;
}

int main () {
    PTB2 a;
    a.nhap();
    a.xuat();
    a.tinh();
    PTB2 b;
    b.nhap();
    b.xuat();
    b.tinh();
}