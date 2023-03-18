#include<stdio.h>
#include<math.h>
main(){
	float a,b,c,s,p;
	printf("Tinh S va P tam giac\nNhap 3 gia tri:");
	scanf("%f%f%f",&a,&b,&c);
	p = (a+b+c)/2;
	(a+b>c && a+c>b && b+c>a) ? printf("S = %.2f , P = %.2f",sqrt(p*(p-a)*(p-b)*(p-c)),p*2) : printf("Ko phai tam giac"); 
}
