#include<stdio.h>
main(){
	int a,b;
	char pt;
	printf("Tinh toan tren 2 so nguyen");
	printf("\nNhap 2 so:");
	scanf("%d%d",&a,&b);
	printf("Nhap phep toan(+,-,*,/):");
	fflush(stdin);
	scanf("%c",&pt);
	(pt=='+') ? printf("%d %c %d = %d",a,pt,b,a+b):printf("");
	(pt=='-') ? printf("%d %c %d = %d",a,pt,b,a-b):printf("");
	(pt=='*') ? printf("%d %c %d = %d",a,pt,b,a*b):printf("");
	(b!=0) ? (pt=='/') ? printf("%d %c %d = %.2f",a,pt,b,1.0*a/b):printf("") : printf("Ko chia ko");
	(pt!='+'&& pt!='-' && pt!='*' && pt!='/') ? printf("Ko tinh duoc") : printf("");
}
