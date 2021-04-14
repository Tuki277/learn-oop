#include <bits/stdc++.h>

using namespace std;

class ps {
    int tu, mau;
    public:
        ps operator+ (ps x);
        ps operator- (ps x);
        ps operator* (ps x);
        ps operator/ (ps x);
        float operator- ();
        friend istream& operator >> (istream& x, ps& y);
        friend ostream& operator << (ostream& x, ps y);
};

ps ps :: operator+ (ps x) {
    ps tg;
    tg.tu = tu * x.mau + mau * x.tu;
    tg.mau = mau * x.mau;
    return tg;
}

ps ps :: operator- (ps x) {
    ps tg;
    tg.tu = tu * x.mau - mau * x.tu;
    tg.mau = tu * x.mau;
    return tg;
}

ps ps :: operator* (ps x) {
    ps tg;
    tg.tu = tu * x.tu;
    tg.mau = mau * x.mau;
    return tg;
}

ps ps :: operator/ (ps x) {
    ps tg;
    tg.tu = tu * x.mau;
    tg.mau = mau * x.tu;
    return tg;
}

float ps :: operator- () {
    return (float) tu / mau;
}

istream& operator >> (istream& x, ps& y) {
    cout << "Nhap ps: ";
    cin >> y.tu >> y.mau;
    return x;
}

ostream& operator << (ostream& x, ps y) {
    cout << y.tu << " / " << y.mau << endl;
    return x;
}

int main () {
    ps a, b;
    cin >> a;
    cout << a;
    cin >> b;
    cout << b;
    ps H = a + b;
    cout << -H;
    ofstream f("Hieungu.txt", ios::app);
    f << -a << " + " <<  -b << " = " << -H;
    f.close();
}