#include<iostream>
using namespace std;
void nhap(int &a, int &b)
{	cout<<"Nhap vao hai so:\n";
	cin>>a;
	cin>>b;
}
int USCLN(int a, int b) {
    if (b == 0) return a;
    return USCLN(b, a % b);
}
int main() 
{	int a, b;
    nhap(a,b);
    cout<<"\n USCLN cua hai so la: "<<USCLN(a,b);
}
