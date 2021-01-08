// toán từ xác định phạm vi

#include <iostream>

using namespace std;

int x = 5;

int main (){
    int x = 6;
    cout << "X o trong main = " << x << endl;
    cout << "X o ngoai main = " << ::x;
}