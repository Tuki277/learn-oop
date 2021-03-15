#include <bits/stdc++.h>

using namespace std;

class ARRAY {
    private:
        int *Value, n;
    public:
        ARRAY();
        ARRAY(int x);
        ~ARRAY();
        void nhap ();
        void xuat ();
};

ARRAY::ARRAY () {
    n = 0;
    delete []Value;
}

ARRAY::ARRAY(int x) {
    n = x;
    Value = new int[n];
    for (int i = 0; i<n; i++) {
        Value[i] = 0;
    }
}

ARRAY::~ARRAY () {
    n = 0;
    delete []Value;
}

void ARRAY::nhap() {
    if ( n == 0) {
        cout << "n = ";
        cin >> n;
    }
    if ( Value == NULL ) {
        Value = new int[n];
    }
    for (int i = 0; i<n; i++) {
        cout << "Value[" << i << "] = ";
        cin >> Value[i];
    }
}

void ARRAY::xuat () {
    for ( int i = 0; i<n; i++) {
        cout << Value[i] << " ";
    }
}

int main () {
    ARRAY x(5);
    cout<<endl<<"Mang vua khoi tao : ";
    x.xuat();
    cout<<endl<<"Nhap mang: "<<endl;
    x.nhap();
    cout<<endl<<"Mang vua nhap: ";
    x.xuat();
    return 0;
}