#include<iostream>
using namespace std;

void nhap(int &n)
{
	do{
		cout <<"nhap n: "; cin >> n;
	}while(n<=0);
}
int daoNguoc(int n, int sdn)
{
	if (n == 0)
		return sdn;
	else
	{
		sdn = sdn*10 + n%10;
		return daoNguoc(n/10, sdn);
	}
}
int main()
{
	int n, sdn;
	
	nhap(n);
	cout <<"\nso dao nguoc la: " << daoNguoc(n, sdn);
	return 0;
}
