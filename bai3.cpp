// Hàm friend

#include <iostream>

using namespace std;

class soPhuc
{
    private:
        int thuc;
        int ao;
    public:
        // constructer cùng tên với class
        soPhuc()
        {
            thuc = 5;
            ao = 3;
        }
        void xuat ()
        {
            cout << thuc << ", " << ao << endl;
        }
        friend void cong2SoPhuc(soPhuc a, soPhuc b);
};

void cong2SoPhuc(soPhuc a, soPhuc b)
{
    // a = 10, b = 6
    soPhuc c;
    c.thuc = a.thuc + b.thuc;
    c.ao = a.ao + b.ao;
    c.xuat();
}

int main()
{
    soPhuc a, b, c;
    cong2SoPhuc(a,b);
}