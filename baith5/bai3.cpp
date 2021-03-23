#include <bits/stdc++.h>

using namespace std;

class Vehicle {
    protected:
        char hangSX[20], nhanHieu[10];
        int namSX;
};

class oto : public Vehicle {
    int soChoNgoi;
    float dungTich;
    public:
        void nhap () {
            cout << "Nhap hang san xuat: ";
            fflush(stdin);
            gets(hangSX);
            cout << "Nhap nhan hieu: ";
            fflush(stdin);
            gets(nhanHieu);
            cout << "Nhap so cho ngoi: ";
            cin >> soChoNgoi;
            cout << "Nhap dung tich: ";
            cin >> dungTich;
        }
        void xuat () {
            cout << "Hang san xuat: " << hangSX << endl;
            cout << "Nhan hieu: " << nhanHieu << endl;
            cout << "So cho ngoi: " << soChoNgoi << endl;
            cout << "Dung tich: " << dungTich << endl;
        }
};

class moto : public Vehicle {
    int phanKhoi;
    public:
        void nhap () {
            cout << "Nhap hang san xuat: ";
            fflush(stdin);
            gets(hangSX);
            cout << "Nhap nhan hieu: ";
            fflush(stdin);
            gets(nhanHieu);
            cout << "Nhap phan khoi: ";
            cin >> phanKhoi;
        }
        void xuat () {
            cout << "Hang san xuat: " << hangSX << endl;
            cout << "Nhan hieu: " << nhanHieu << endl;
            cout << "Phan khoi: " << phanKhoi << endl;
        }
};


int main () {
    oto a;
    moto b;
    a.nhap();
    a.xuat();
    b.nhap();
    b.xuat();
}