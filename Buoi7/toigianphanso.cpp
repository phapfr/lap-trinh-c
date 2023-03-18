#include<iostream>
#include<math.h>
using namespace std;
void nhap(int &a, int &b)
{	cout<<"\n Nhap tu so: ";
	cin>>a;
	do{cout<<"\n Nhap mau so: ";
		cin>>b;
	}while(b==0);
}
void in(int a, int b)
{	if(a>0 && b<0)
		cout<<a*-1<<"/"<<abs(b);
	else
		if(a<0 && b<0)
			cout<<abs(a)<<"/"<<abs(b);
		else 
			cout<<a<<"/"<<b;	
}
int UCLN(int a, int b)
{	a=abs(a); b=abs(b);
	while(a!=b)
	 if(a>b) a=a-b;
	 else b=b-a;
	return a;
}
void toigian(int a, int b)
{	int uc=UCLN(a, b);
	a=a/uc;
	b=b/uc;
	cout<<"\n Phan so toi gian la: ";in(a,b);
}
int main()
{	int a, b;
	nhap(a,b);
	cout<<"\n Phan so vua nhap la: ";in(a,b);
	toigian(a,b);
}
