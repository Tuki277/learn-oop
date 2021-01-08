//class

#include <iostream>

using namespace std;

class SinhVien{
    // chỉ mức truy cập : private chỉ trong class
    private :
        string msv;
        string tenSV;
        int tuoi;
    public :
    // SinhVien ở đây là constructor
        SinhVien()
        {
            msv = "2019602661";
            tenSV = "Nguyen Van A";
            tuoi = 20;
        }
        void noiChuyenTrongGio()
        {
            cout << "Noi linh tinh trong gio" << endl;
        }
        void choiGame()
        {
            cout << "Choi game" << endl;
        }
        void hocBai()
        {
            cout << "Hoc bai" << endl;
        }
        void inThongTin()
        {
            cout << this ->tenSV << " - " << msv << " - " << tuoi << endl;
        // this ở đây thì có thể có hay không cũng đều được, không quan trọng cho lắm
        }
};

int main()
{
    SinhVien a;
    // ở đây k thể truy xuất đến tên vì tên ở class private
    // cout << a.tenSv;
    // có thể truy xuất đến các hàm void ở public
    a.inThongTin();
    a.choiGame();
    a.hocBai();
}