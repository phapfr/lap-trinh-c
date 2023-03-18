#include<stdio.h>
main(){
	int a,b,c,d,max,min;
	printf("Nguyen Hong Phap\n");
	printf("Tim hieu Max - Min cua 4 so");
	printf("\nNhap 4 so:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	max= (a>b) ? a:b;
	max= (c>max) ? c:max;
	max= (d>max) ? d:max;
	printf("Max(%d,%d,%d,%d) = %d\n",a,b,c,d,max);
	min= (a<b) ? a:b;
	min= (c<min) ? c:min;
	min= (d<min) ? d:min;
	printf("Min(%d,%d,%d,%d) = %d\n",a,b,c,d,min);
	printf("Max-min= %d - %d  = %d",max,min,max-min);
}
