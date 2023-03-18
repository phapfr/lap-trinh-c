#include<iostream>
using namespace std;
void nhap(int &n)
{	do{	cout<<"\n Nhap n: ";
		cin>>n;
	}while(n<1);
}
long tongdqs1(int n)
{	if(n==1) return 1;
	else return n+tongdqs1(n-1);
}
float tongdqs2(int n)
{	if(n==1) return 1;
	else return 1/(float)n+tongdqs2(n-1);
}
int main()
{	int(n);
	nhap(n);
	cout<<"\n Tong tu 1 den "<<n<<" la: "<<tongdqs1(n);
	nhap(n);
	cout<<"\n S2= 1/1+..+1/"<<n<<"= "<<tongdqs2(n);
}