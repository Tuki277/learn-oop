#include <bits/stdc++.h>

using namespace std;

class Hang;

class Date {
    private:
        int ngay, thang, nam;
    friend class Hang;
    friend void In(Hang a[], int n, int year);
};

class Hang {
    private:
        char MaHang[10];
        char TenHang[20];
        Date x;
    public:
        void nhap ();
        void xuat ();
    friend void In(Hang a[], int n, int year);
};

void Hang::nhap() {
    cout << "Nhap vao ma hang : ";
    fflush(stdin);
    gets(MaHang);
    cout << "Nhap vao Ten Hang : ";
    fflush(stdin);
    gets(TenHang);
    cout << "Nhap ngay, thang, nam : ";
    cin >> x.ngay >> x.thang >> x.nam;
}

void Hang::xuat () {
    cout << " Ma hang : " << MaHang << endl;
    cout << " Ten hang : " << TenHang << endl;
    cout << " Ngay, thang, nam : " << x.ngay << "/" << x.thang << "/" << x.nam << endl;
}

void In (Hang a[], int n, int year){
    for ( int i = 0; i<n; i++) {
        if (a[i].x.nam == year) {
            a[i].xuat();
        }
    }
}

int main () {
    Hang *a;
    int n;
    cout << "Nhap so luong mat hang : ";
    cin >> n;
    a = new Hang[n];
    for ( int i = 0; i<n; i++) {
        a[i].nhap();
    }
    In(a, n, 2017);
}