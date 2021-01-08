// hàm inline
#include <iostream>

using namespace std;

inline int tinhDienTich (int a, int b)
{
    return a * b;
}

int main()
{
    int a = 5;
    int b = 4;
    cout << "S HCN = " << tinhDienTich(a,b);
}