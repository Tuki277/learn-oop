#include <bits/stdc++.h>

using namespace std;

class NSX {
    private:
        char Mansx[10];
        char Tennsx[20];
        char DCNSX[20];
    friend class Hang;
};

class Hang {
    private:
        char MaHang[10];
        char TenHang[20];
        float DonGia;
        float TrongLuong;
        NSX x;
    public:
        void nhap ();
        void xuat ();
};

void Hang::nhap() {
    cout << "Nhap vao ma hang : ";
    fflush(stdin);
    gets(MaHang);
    cout << "Nhap vao Ten Hang : ";
    fflush(stdin);
    gets(TenHang);
    cout << "Nhap don gia : ";
    cin >> DonGia;
    cout << "Nhap trong luong : ";
    cin >> TrongLuong;
    cout << "Nhap mansx : ";
    fflush(stdin);
    gets(x.Mansx);
    cout << "Nhap Tennsx : ";
    fflush(stdin);
    gets(x.Tennsx);
    cout << "Nhap DCNSX : ";
    fflush(stdin);
    gets(x.DCNSX);
}

void Hang::xuat () {
    cout << " Ma hang : " << MaHang << endl;
    cout << " Ten hang : " << TenHang << endl;
    cout << " Don gia : " << DonGia << endl;
    cout << " Trong luong : " << TrongLuong << endl;
    cout << " Ma nsx : " << x.Mansx << endl;
    cout << " Ten nsx : " << x.Tennsx << endl;
    cout << " DCNSX : " << x.DCNSX << endl;
}

int main () {
    Hang a;
    a.nhap();
    a.xuat();
}