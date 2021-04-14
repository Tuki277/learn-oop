#include <bits/stdc++.h>

using namespace std;
class tamthuc {
    int a, b, c;
    public:
        tamthuc ();
        tamthuc (int x, int y, int z);
        tamthuc operator+ ();
        tamthuc operator- (tamthuc x);
        tamthuc operator+ (tamthuc x);
        friend istream& operator >> (istream& x, tamthuc& y);
        friend ostream& operator << (ostream& x, tamthuc& y);
};

tamthuc :: tamthuc () {
    a = b = c = 0;
}

tamthuc :: tamthuc (int x, int y, int z) {
    a = x;
    b = y;
    c = z;
}

tamthuc tamthuc :: operator+ (tamthuc x) {
    tamthuc tg;
    tg.a = a + x.a;
    tg.b = b + x.b;
    tg.c = c + x.c;
    return tg;
}

tamthuc tamthuc :: operator- (tamthuc x) {
    tamthuc tg;
    tg.a = a - x.a;
    tg.b = b - x.b;
    tg.c = c - x.c;
    return tg;
}

tamthuc tamthuc :: operator+ () {
    tamthuc tg;
    tg.a = -a;
    tg.b = -b;
    tg.c = -c;
    return tg;
}

istream& operator >> (istream& x, tamthuc& y) {
    cout << "Nhap tam thuc : ";
    cin >> y.a >> y.b >> y.c;
    return x;
}

ostream& operator << (ostream& x, tamthuc& y) {
    cout << y.a << "x^2 + " << y.b << "x + " << y.c << endl;
    return x;
}

int main () {
    tamthuc a, b;
    cin >> a;
    cout << a;
    cin >> b;
    cout << b;
    a = +a;
    b = +b;
    tamthuc H = a + b;
    cout << H;
}