#include <bits/stdc++.h>

using namespace std;

class Printer {
    protected:
        float trongLuong;
        char hangSX[20];
        int namSX;
        int todo;
};

class Layserprinter : public Printer {
    int doPhanGiai;
    public:
        void nhap() {
            cout << "Nhap trong luong: ";
            cin >> trongLuong;
            cout << "Nhap hang san xuat: ";
            fflush(stdin);
            gets(hangSX);
            cout << "Nhap nam san xuat: ";
            cin >> namSX;
            cout << "Nhap toc do: ";
            cin >> todo;
            cout << "Nhap mat do phan giai: ";
            cin >> doPhanGiai;
        }
        void xuat () {
            cout << "Trong luong: " << trongLuong << endl;
            cout << "Hang san xuat: " << hangSX << endl;
            cout << "Nam san xuat: " << namSX << endl;
            cout << "Toc do: " << todo << endl;
            cout << "Do phan giai: " << doPhanGiai << endl;
        }
};

class Dotprinter : public Printer {
    int matDoKim;
    public:
        void nhap() {
            cout << "Nhap trong luong: ";
            cin >> trongLuong;
            cout << "Nhap hang san xuat: ";
            fflush(stdin);
            gets(hangSX);
            cout << "Nhap nam san xuat: ";
            cin >> namSX;
            cout << "Nhap toc do: ";
            cin >> todo;
            cout << "Nhap mat do kim: ";
            cin >> matDoKim;
        }
        void xuat () {
            cout << "Trong luong: " << trongLuong << endl;
            cout << "Hang san xuat: " << hangSX << endl;
            cout << "Nam san xuat: " << namSX << endl;
            cout << "Toc do: " << todo << endl;
            cout << "Mat do kim: " << matDoKim << endl;
        }
};

int main () {
    Layserprinter a;
    Dotprinter b;
    a.nhap();
    a.xuat();
    b.nhap();
    b.xuat();
}