#include <bits/stdc++.h>

using namespace std;

class Array {
    int *a, n;
    public:
        Array operator++ ();
        Array operator-- ();
        friend ostream& operator << (ostream& x, Array y);
        friend istream& operator >> (istream& x, Array &y);
};

ostream& operator << (ostream& x, Array y) {
    for (int i = 0; i < y.n; i++) {
        cout << y.a[i];
    }
}

istream& operator >> (istream& x, Array &y) {
    cout << "Nhap n: ";
    cin >> y.n;
    y.a = new int[y.n];
    for (int i = 0; i<y.n; i++) {
        cin >> y.a[i];
    }
}

Array Array :: operator++ () {
    for (int i = 0; i<n; i++) {
        for (int j = i+1; j<n; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    return *this;
}

Array Array :: operator-- () {
    for (int i = 0; i<n; i++) {
        for (int j = i+1; j<n; j++) {
            if (a[i] < a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    return *this;
}

int main () {
    Array a;
    cout << "Nhap mang: ";
    cin >> a;
    cout << a;
    cout << endl;
    a = ++a;
    cout << a;
}