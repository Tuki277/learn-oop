#include <bits/stdc++.h>

using namespace std;

class Person {
    protected:
        char hoTen[10], queQuan[20];
        int ngaySinh;
};

class KySu : public Person {
    private:
        char nganh[20];
        int namTN;
    public:
        void nhap();
        void xuat();
        friend void inDS (KySu a[], int n);
};

void KySu::nhap(){
    cout << "Nhap ho ten: ";
    fflush(stdin);
    gets(hoTen);
    cout << "Nhap que quan: ";
    fflush(stdin);
    gets(queQuan);
    cout << "Nhap ngay sinh: ";
    cin >> ngaySinh;
    cout << "Nhap nganh: ";
    fflush(stdin);
    gets(nganh);
    cout << "Nhap nam tot nghiep: ";
    cin >> namTN;
}

void KySu :: xuat() {
    cout << "Ho ten : " << hoTen << endl;
    cout << "Que quan : " << queQuan << endl;
    cout << "Ngay sinh : " << ngaySinh << endl;
    cout << "Nganh : " << nganh << endl;
    cout << "Nam tot nghiep : " << namTN << endl;
}

void nhapDS (KySu a[], int n) {
    for (int i = 0; i<n; i++) {
        a[i].nhap();
    }
}

void inDS (KySu a[], int n) {
    int max = 0;
    for (int i = 0; i<n; i++){
        if (a[i].namTN > max ) {
            max = a[i].namTN;
        }
    }
    cout << "Sinh vien tot nghiep gan day nhat" << endl;
    for (int i = 0; i<n; i++) {
        if ( a[i].namTN == max) {
            a[i].xuat();
        }
    }
}

int main() {
    KySu *a;
    int n;
    cout << "Nhap vao so luong sinh vien : ";
    cin >> n;
    a = new KySu[n];
    nhapDS(a,n);
    inDS(a,n);
}