#include<stdio.h>
#include<stdlib.h>
main(){
	int a,b;
	float kq;
	char pt;
	printf("Tinh toan tren 2 so nguyen");
	printf("\nNhap 2 so nguyen:");
	scanf("%d%d",&a,&b);
	printf("Nhap phep toan(+,-,*,/):");
	fflush(stdin);
	scanf("%c",&pt);
	if(pt=='+') kq=a+b;
	if(pt=='-') kq=a-b;
	if(pt=='*') kq=a*b;
	if(pt=='/')
		if(b!=0) kq= 1.0*a/b;
		else{
	    printf("Ko chia 0");
	    exit(0);
	    }
	if(pt!='+'&& pt!='-' && pt!='*' && pt!='/'){
	    printf("Ko tinh duoc");
	    exit(0);
	}
	printf("%d %c %d = %.2f",a,pt,b,kq);
}
