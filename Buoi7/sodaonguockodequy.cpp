#include<iostream>
using namespace std;

void nhap(int &n)
{
	do{
		cout <<"nhap n: "; cin >> n;
	}while(n<=0);
}
int soDaoNguoc(int n)
{ 
  	int daoNguoc=0; 
  	while(n>0){
    	daoNguoc = daoNguoc*10+n%10;
    	n/=10;
  	}
  	return daoNguoc;
}
int main()
{
    int n;
 	
 	nhap(n);
    int kq = soDaoNguoc(n);
    cout <<"\nSo dao nguoc: " << kq;
    return 0;
}
