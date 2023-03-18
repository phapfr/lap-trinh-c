#include<iostream>
using namespace std;
main(){
	int a,b;
	char pt;
	cout<<"Tinh toan tren 2 so nguyen";
	cout<<"\nNhap 2 so:";
	cin>>a>>b;
	cout<<"Nhap phep toan(+,-,*,/):";
	fflush(stdin);
	cin>>pt;
	(pt=='+') ? cout<<a<<"+"<<b<<"="<<a+b : cout<<"";
	(pt=='-') ? cout<<a<<"-"<<b<<"="<<a-b : cout<<"";
	(pt=='*') ? cout<<a<<"*"<<b<<"="<<a*b : cout<<"";
	(b!=0) ? (pt=='/') ? cout<<a<<"/"<<b<< "=" <<1.0*a/b :cout<<"" : cout<<"Ko chia ko";
	(pt!='+'&& pt!='-' && pt!='*' && pt!='/') ? cout<<"Ko tinh duoc" : cout<<"";
}
