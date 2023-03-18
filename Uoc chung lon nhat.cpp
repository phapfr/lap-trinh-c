#include<stdio.h>
main(){
	int a,b;
	printf("Nhap a>0:");
	scanf("%d",&a);
	printf("Nhap b>0:");
	scanf("%d",&b);
	while(a!=b){
		if(a>b){
		a=a-b;
		}
		else
		b=b-a;
	}
	printf("UCLN:%d",a);
}
