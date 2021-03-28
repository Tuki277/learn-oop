#include <bits/stdc++.h>

using namespace std;

class Nhap {
    private:
        char maPhieu[10], maNCC[10], diaChi[50], ngayLap[20], tenNCC[50], tenHang[50];
        float donGia;
        int soLuong;
    public:
        void nhapSP ();
        void nhapPhieu ();
        void xuatPhieu ();
        void tieuDe ();
        float tongTien ();
};

void Nhap ::nhapSP() {
    cout << "Nhap vao ten hang : ";
    fflush(stdin);
    gets(tenHang);
    cout << "Nhap vao don gia: ";
    cin >> donGia;
    cout << "Nhap vao so luong : ";
    cin >> soLuong;
}

void Nhap :: nhapPhieu () {
    cout << "Nhap vao ma phieu : ";
    fflush(stdin);
    gets(maPhieu);
    cout << "Nhap vao ma NCC : ";
    fflush(stdin);
    gets(maNCC);
    cout << "Nhap vao dia chi : ";
    fflush(stdin);
    gets(diaChi);
    cout << "Nhap vao ngay lap : ";
    fflush(stdin);
    gets(ngayLap);
    cout << "Nhap vao ma ten NCC : ";
    fflush(stdin);
    gets(tenNCC);
}

void Nhap :: tieuDe () {
    cout << setw(20) << "Phieu nhap hang" << endl;
    cout << "ma phieu : " << maPhieu << setw(20) << "Ngay lap: " << ngayLap << endl;
    cout << "ma NCC : " << maNCC << setw(20) << "Ten NCC: " << tenNCC << endl;
    cout << "dia chi : " << diaChi << endl;
}

void Nhap :: xuatPhieu() {
    cout << tenHang << setw(20) << donGia << setw(20) << soLuong << setw(20) << donGia * soLuong << endl;
}

void nhapDS (Nhap a[], int n) {
    for (int i = 0; i<n; i++) {
        a[i].nhapSP();
    }
}

void xuatDS (Nhap a[], int n) {
    float tien = 0;
    for (int i = 0; i<n; i++) {
        a[i].xuatPhieu();
        tien += a[i].tongTien();
    }
    cout << "tong = " << tien;
}

float Nhap :: tongTien () {
    return donGia * soLuong;
}

int main() {
    Nhap *a, b;
    int n;
    b.nhapPhieu();
    cout << "Nhap so luong san pham: ";
    cin >> n;
    a = new Nhap[n];
    cout << "xuat";
    nhapDS(a,n);
    b.tieuDe();
    cout << "Ten hang" << setw(20) << "Don gia" << setw(20) << "So luong" << setw(20) << "Thanh tien" << endl;
    xuatDS(a,n);
}