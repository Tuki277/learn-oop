#include <bits/stdc++.h>

using namespace std;

class SP {
    int thuc, ao;
    public:
        SP();
        SP(int x, int y);
        SP operator+ (SP x);
        SP operator- (SP x);
        friend istream& operator >> (istream& a, SP& x);
        friend ostream& operator << (ostream& a, SP x);
};

SP :: SP () {
    thuc = ao = 0;
}

SP :: SP (int x, int y) {
    thuc = x;
    ao = y;
}

SP SP :: operator+ (SP x) {
    SP tg;
    tg.thuc = thuc + x.thuc;
    tg.ao = ao + x.ao;
    return tg;
}

SP SP :: operator- (SP x) {
    SP tg;
    tg.thuc = thuc - x.thuc;
    tg.ao = ao - x.ao;
    return tg;
}

istream& operator >> (istream& a, SP& x) {
    cout << "Nhap so phuc";
    cin >> x.thuc >> x.ao;
    return a;
}

ostream& operator << (ostream& a, SP x) {
    cout << x.thuc << " + i * " << x.ao << endl;
    return a;
}

int main () {
    SP a, b;
    cout << "nhap so phuc 1: ";
    cin >> a;
    cout << "Nhap so phuc 2: ";
    cin >> b;
    SP H = a + b;
    cout << H;
}