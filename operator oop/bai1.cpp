#include <bits/stdc++.h>

using namespace std;

class PS {
    int ts, ms;
    public:
        PS operator+ (PS x);
        PS operator- (PS x);
        PS operator* (PS x);
        PS operator/ (PS x);
        float operator- ();
        friend ostream& operator << (ostream& a, PS x);
        friend istream& operator >> (istream& a, PS& x);
};

PS PS :: operator+ (PS x) {
    PS tg;
    tg.ts = ts * x.ms + ms * x.ts;
    tg.ms = ms * x.ms;
    return tg;
}

PS PS :: operator- (PS x) {
    PS tg;
    tg.ts = ts * x.ms - ms * x.ts;
    tg.ms = ms * x.ms;
    return tg;
}

PS PS :: operator* (PS x) {
    PS tg;
    tg.ts = ts * x.ts;
    tg.ms = ms * x.ms;
    return tg;
}

PS PS :: operator/ (PS x) {
    PS tg;
    tg.ts = ts * x.ms;
    tg.ms = ms * x.ts;
    return tg;
}

float PS :: operator- () {
    return (float)ts / ms;
}

ostream& operator << (ostream& a, PS x) {
    cout << x.ts << " / " << x.ms << endl;
    return a;
}

istream& operator >> (istream& a, PS& x) {
    cout << "Nhap tu so : ";
    cin >> x.ts;
    cout << "Nhap mau so : ";
    cin >> x.ms;
    return a;
}

int main () {
    PS a, b;
    cout << "Nhap phan so dau tien: ";
    cin >> a;
    cout << "Nhap phan so thu hai: ";
    cin >> b;
    PS H = a + b;
    cout << "tong = " << -H;
}