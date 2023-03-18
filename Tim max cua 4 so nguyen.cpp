#include<stdio.h>
main(){
	int a,b,c,d,max,max1,max2;
	printf("Tim max cua 4 so nguyen:\n");
	printf("Nhap 4 so:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	max = (a>b) ? a:b;
	max1 = (c>d) ? c:d;
	max2 = (max>max1) ? max:max1;
	printf("Max (%d,%d,%d,%d) = %d",a,b,c,d,max2);
}
