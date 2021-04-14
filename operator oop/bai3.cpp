#include <bits/stdc++.h>

using namespace std;

class Tamthuc {
    int a, b, c;
    public:
        Tamthuc();
        Tamthuc(int x, int y, int z);
        Tamthuc operator+ (Tamthuc x);
        Tamthuc operator- (Tamthuc x);
        Tamthuc operator- ();
        friend istream& operator >> (istream& x, Tamthuc& y);
        friend ostream& operator << (ostream& x, Tamthuc& y);
};

Tamthuc :: Tamthuc () {
    a = b = c = 0;
}

Tamthuc :: Tamthuc (int x, int y, int z) {
    a = x;
    b = y;
    c = z;
}

Tamthuc Tamthuc :: operator+ (Tamthuc x) {
    Tamthuc tg;
    tg.a = a + x.a;
    tg.b = b + x.b;
    tg.c = c + x.c;
    return tg;
}

Tamthuc Tamthuc :: operator- (Tamthuc x) {
    Tamthuc tg;
    tg.a = a - x.a;
    tg.b = b - x.b;
    tg.c = c - x.c;
    return tg;
}

Tamthuc Tamthuc :: operator- () {
    Tamthuc tg;
    tg.a = - a;
    tg.b = - b;
    tg.c = - c;
    return tg;
}

istream& operator >> (istream& x, Tamthuc& y) {
    cout << "Nhap tam thuc: ";
    cin >> y.a >> y.b >> y.c;
    return x;
}

ostream& operator << (ostream& x, Tamthuc& y) {
    cout << y.a << "x^2 + " << y.b << "x + " << y.c << endl;
    return x;
}

int main () {
    Tamthuc a, b;
    cin >> a;
    a = -a;
    cout << a;
    cin >> b;
    b = -b;
    cout << b;
    Tamthuc H = a + b;
    cout << H;
}