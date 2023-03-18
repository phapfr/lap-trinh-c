#include<stdio.h>
main(){
	float a,b,X;
	printf("Nguyen Hong Phap\n");
	printf("Giai ax+b=0\n");
	printf("Nhap a:");
	scanf("%f",&a);
	printf("Nhap b:");
	scanf("%f",&b);
	printf("%.2fx %c %.2f = 0\n",a,((b>=0)?'+':' '),b);
	a!=0 ? printf("X= -%.2f / %.2f = %.2f",b,a,-b/a) :(a==0&b==0) ? printf("Vo so no") : printf("Vo no");
}
