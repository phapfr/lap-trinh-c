#include<stdio.h>
main(){
	int n;
	printf("Nguyen Hong Phap\n");
	printf("Nhap so co 5 chu so:");
	scanf("%d",&n);
	if(9999<n&&n<100000){
	int a,b,c,d,e;
		e=n%10;
		d=(n/10)%10;
		c=(n/100)%10;
		b=(n/1000)%10;
		a=n/10000;
	int max=a;
		if(b>max) max=b;
		if(c>max) max=c;
		if(d>max) max=d;
		if(e>max) max=e;
		printf("So lon nhat trong 5 chu so: %d",max);
	}
	else
	    printf("Hay nhap so lon hon 9999 va nho hon 100000");
}
