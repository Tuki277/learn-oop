//destructor hàm sẽ mặc định tự gọi khi constructor hết hiệu lực

#include <iostream>

using namespace std;

class Nguoi {
    private :
        string ten;
        int tuoi;
    public:
        // constructor
        Nguoi()
        {
            ten = "Nguyen Van A";
            tuoi = 20;
        }
        void noiChuyen()
        {
            cout << "Meo meo meo meo meo" << endl;
        }
        // destructor
        ~Nguoi()
        {
            cout << "Huy constructor";
        }
};

int main()
{
    Nguoi a;
    a.noiChuyen();
}