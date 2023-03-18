#include <stdio.h>
#include <math.h>
main(){
	float a, b;
	printf("Tinh S va P cua hinh chu nhat");
	printf("\nNhap canh 1:");
	scanf("%f",&a);
	printf("Nhap canh 2:");
	scanf("%f",&b);
	printf("S : %2.f * %2.f = %.2f",a,b,a*b);
	printf("\nP : 2 * (%.2f+%.2f) = %.2f",a,b,2*(a+b));
}
