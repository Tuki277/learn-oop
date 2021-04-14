#include <bits/stdc++.h>

using namespace std;

class ARRAY {
    int *a, n;
    public:
        ARRAY();
        ARRAY(int x);
        ~ARRAY();
        ARRAY operator / (ARRAY x);
        friend ostream& operator << (ostream& x, ARRAY y);
        friend istream& operator >> (istream& x, ARRAY& y);
};

ARRAY :: ARRAY() {
    n = 0;
    a = NULL;
}

ARRAY :: ARRAY(int x) {
    n = x;
    for (int i = 0; i<n; i++) {
        a[i] = 0;
    }
}

ARRAY :: ~ARRAY() {
    n = 0;
    a = NULL;
}


ARRAY ARRAY :: operator / (ARRAY x) {
    ARRAY tg;
    if (n == x.n) {
        tg.n = n;
        tg.a = new int[n];
        for (int i = 0; i<n; i++) {
            tg.a[i] = ( (float)a[i] + (float)x.a[i] ) / (float)2;
        }
    } else {
        n = 0;
        a = NULL;
    }
    return tg;
}

ostream& operator << (ostream& x, ARRAY y) {
    for (int i = 0; i<y.n; i ++) {
        x << y.a[i];
    }
    return x;
}

istream& operator >> (istream& x, ARRAY& y) {
    cout << "Nhap n: ";
    cin >> y.n;
    y.a = new int[y.n];
    for (int i = 0; i<y.n; i++) {
        x >> y.a[i];
    }
    return x;
}

int main () {
    ARRAY a, b;
    cin >> a;
    cout << a;
    cout << endl;
    cin >> b;
    cout << b;
    cout << endl;
    ARRAY H = a / b;
    cout << "Thuong = " << H;
}