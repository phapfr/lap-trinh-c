#include<stdio.h>
#include<stdlib.h>
void NhapPS(int &t, int &m){
	printf("\n\tTu:");
	scanf("%d", &t);
	do{
		printf("\tMau>0:");
		scanf("%d", &m);
	}while(m<=0);
}
void Cong(int a, int b, int c, int d, int &x, int &y){
	x = a*d + c*b;
	y = b*d;
}
void Tru(int a, int b, int c, int d, int &x, int &y){
	x = a*d - c*b;
	y = b*d;
}
void Nhan(int a, int b, int c, int d, int &x, int &y){
	x = a*c;
	y = b*d;
}
void Chia(int a, int b, int c, int d, int &x, int &y){
	x = a*d;
	y = b*c;
}
int UCLN(int a, int b){
	int x=a, y=b;
	while(x!=y)
		if(x>y) x = x-y;
		else y = y-x;
	return x;
}
main(){
	int t1=0, t2=0, t3=0, m1=1, m2=1, m3=1;
	char pt;
	printf("Chuong trinh tinh toan tren 2 phan so:");
	printf("\nNhap phan so 1:");
	NhapPS(t1, m1);
	printf("Nhap phan so 2:");
	NhapPS(t2, m2);
	printf("Nhap phep tinh (+,-,*,/):");
	fflush(stdin);
	scanf("%c",&pt);
	switch(pt){
		case '+': 	Cong(t1, m1, t2, m2, t3, m3);
					break;
		case '-':	Tru(t1, m1, t2, m2, t3, m3);
					break;
		case '*':	Nhan(t1, m1, t2, m2, t3, m3);
					break;
		case '/':	Chia(t1, m1, t2, m2, t3, m3);
					break;
		default:	printf("Khong tinh");
					exit(0);
	}
	if(t3!=0){
		int t = UCLN(abs(t3), abs(m3));
		t3 = t3 / t; m3 = m3 / t;
	}
	printf("%d/%d %c %d/%d = %d/%d",t1,m1,pt,t2,m2,t3,m3);
}



