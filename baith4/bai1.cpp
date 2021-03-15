#include <bits/stdc++.h>

using namespace std;

class May {
    private :
        char masv[10];
        char hoTen[30];
        float Toan, Ly, Hoa;
    public:
        void nhap ();
        void xuat ();
    friend void sort (May a[], int n);
};

void May::nhap() {
    cout << "Nhap vao ma sv : ";
    fflush(stdin);
    gets(masv);
    cout << "Nhap vao ho ten sv : ";
    fflush(stdin);
    gets(hoTen);
    cout << "Nhap diem toan : ";
    cin >> Toan;
    cout << "Nhap diem ly : ";
    cin >> Ly;
    cout << "Nhap diem hoa : ";
    cin >> Hoa;
}

void May::xuat() {
    cout << "Ma sv : " << masv << endl;
    cout << "ho ten sv : " << hoTen << endl;
    cout << "Tong diem = " << Toan + Ly + Hoa <<endl;
}

void sort (May a[], int n) {
    for (int i = 0; i<n; i++) {
        for (int j = i + 1; j<n; j++) {
            if (a[i].Hoa + a[i].Ly + a[i].Toan > a[j].Hoa + a[j].Ly + a[j].Toan) {
                May temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main () {
    May *a;
    int n;
    cout << "Nhap vao so luong sinh vien : ";
    cin >> n;
    a = new May[n];
    for (int i = 0; i<n; i++) {
        a[i].nhap();
    }
    sort(a,n);
    for (int i = 0; i<n; i++) {
        a[i].xuat();
    }
}