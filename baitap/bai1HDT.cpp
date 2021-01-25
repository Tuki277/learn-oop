#include <bits/stdc++.h>

using namespace std;

class SinhVien
{
    private :
        char MSV[30];
        char HoTen[30];
        int Tuoi;
        float diem;
    public :
        void nhap () {
            cout << "Nhap MSV : ";
            fflush(stdin);
            gets(MSV);
            cout << "Nhap ho ten sv: ";
            fflush(stdin);
            gets(HoTen);
            cout << "Nhap tuoi : ";
            cin >> Tuoi;
            cout << "Nhap diem : ";
            cin >> diem;
        }
        void xuat () {
            cout << "MSV : " << MSV << endl;
            cout << "Ho Ten : " << HoTen << endl;
            cout << "Diem : " << diem << endl;
            cout << "Tuoi : " << Tuoi << endl;
        }
};

int main()
{
    SinhVien a, b;
    a.nhap();
    a.xuat();
    b.nhap();
    b.xuat();
}