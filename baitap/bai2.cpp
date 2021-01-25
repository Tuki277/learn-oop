#include <bits/stdc++.h>

using namespace std;

class Rectangle
{
    private :
        int dai;
        int rong;
    public :
        void Nhap (){
            cout << "Nhap chieu dai : ";
            cin >> dai;
            cout << "Nhap chieu rong : ";
            cin >> rong;
        }
        int chuvi () {
            return ( dai + rong ) * 2;
        }
        int dientich () {
            return dai * rong;
        }
        void print () {
            for (int i = 0; i < rong; i++){
                for (int j = 0; j < dai; j++){
                    cout << "*";
                }
                cout << endl;
            }
        }
};

int main ()
{
    Rectangle a;
    a.Nhap();
    cout << "Chu vi = " << a.chuvi() << endl;
    cout << "Dien tich = " << a.dientich() << endl;
    a.print();
}