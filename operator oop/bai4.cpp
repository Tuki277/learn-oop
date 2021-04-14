#include <bits/stdc++.h>

using namespace std;

class htg {
    int a, b, c;
    public:
        float operator+ ();
        friend istream& operator >> (istream& x, htg& y);
        friend ostream& operator << (ostream& x, htg& y);
};

istream& operator >> (istream& x, htg& y) {
    cout << "Nhap 3 canh: ";
    cin >> y.a >> y.b >> y.c;
    return x;
}

ostream& operator << (ostream& x, htg& y) {
    cout << y.a << y.b << y.c << endl;
    return x;
}

float htg :: operator+ () {
    return a + b + c;
}

int main () {
    htg a;
    cout << "Nhap htg : ";
    cin >> a;
    cout << a;
    cout << "Chu vi = " << +a;
}