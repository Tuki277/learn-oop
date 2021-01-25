#include <bits/stdc++.h>

using namespace std;

class Hang
{
    private :
        char maHang[30];
        char tenHang[40];
        float donGia;
        int soLuong;
    public :
        void Nhap () {
            cout << "Nhap Ma Hang : ";
            fflush(stdin);
            gets(maHang);
            cout << "Nhap Ten Hang : ";
            fflush(stdin);
            gets(tenHang);
            cout << "Nhap gia : ";
            cin >> donGia;
            cout << "Nhap so luong : ";
            cin >> soLuong;
        }
        void Xuat () {
            cout << "Ma Hang : " << maHang << endl;
            cout << "Ten Hang : " << tenHang << endl;
            cout << "Don gia : " << donGia << endl;
            cout << "So luong : " << soLuong << endl;
        }
};

int main ()
{
    Hang a[2];
    for (int i = 0; i<2; i++)
    {
        a[i].Nhap();
        a[i].Xuat();
    }
}