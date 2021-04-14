#include <bits/stdc++.h>

using namespace std;

class ARRAY {
    int *a, n;
    public:
        ARRAY operator++ ();
        ARRAY operator-- ();
        friend istream& operator >> (istream& x, ARRAY& y);
        friend ostream& operator << (ostream& x, ARRAY y);
};

ARRAY ARRAY :: operator++()
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	return *this;
}

ARRAY ARRAY :: operator--()
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (a[i] < a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	return *this;
}

istream& operator >> (istream& x, ARRAY& y) {
    cout << "Nhap n: ";
    cin >> y.n;
    y.a = new int[y.n];
    for (int i = 0; i<y.n; i++) {
        cin >> y.a[i];
    }
}

ostream& operator << (ostream& x, ARRAY y) {
    for (int i = 0; i< y.n; i++ ) {
        cout << y.a[i];
    }
}

int main () {
    ARRAY x;
	cout<<"Nhap mang x: "<<endl;
	cin>>x;
	cout<<"Mang x vua nhap la: "<<endl;
	cout<<x;
	x = ++x;
	cout<<"\nMang x tang dan: "<<endl;
	cout<<x<<endl;
}