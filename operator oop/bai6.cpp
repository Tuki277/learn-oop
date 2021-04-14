#include <bits/stdc++.h>

using namespace std;

class matrix
{
    int **x, m, n;

public:
    matrix operator+();
    friend ostream &operator<<(ostream &x, matrix y);
    friend istream &operator>>(istream &x, matrix &y);
};

matrix matrix :: operator+ () {
    for (int j = 0; j < n; j++)
    {
        for (int  i = 0; i < m; i++)
        {
            cout << x[i][j];
        }
        cout << endl;
    }
    return *this;
}

ostream &operator<<(ostream &x, matrix y)
{
    for (int i = 0; i < y.m; i++)
    {
        for (int j = 0; j < y.n; j++)
        {
            cout << y.x[i][j];
        }
        cout << endl;
    }
    return x;
}

istream &operator>>(istream &x, matrix &y)
{
    cout << "n=";
    x >> y.n;
    cout << "m=";
    x >> y.m;
    y.x = new int *[y.n];
    for (int i = 0; i < y.n; i++)
    y.x[i] = new int[y.m];
    for (int i = 0; i < y.n; i++)
        for (int j = 0; j < y.m; j++)
        {
            cout << "a[" << i << "][" << j << "]=";
            x >> y.x[i][j];
        }
    return x;
}



int main()
{
    matrix a;
    cin >> a;
    cout << a;
    a = +a;
}