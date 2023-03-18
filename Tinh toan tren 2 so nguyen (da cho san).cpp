#include<stdio.h>
#include<math.h>
main(){
	int a=7, b=5;
	printf("Tong : %d + %d = %d",a,b,a+b);
	printf("\nHieu : %d - %d = %d",a,b,a-b);
	printf("\nTich : %d * %d = %d",a,b,a*b);
	printf("\nThuong : %d / %d = %.2f",a,b,1.0*a/b);
	printf("\nNguyen : %d Div %d = %d",a,b,a/b);
	printf("\nDu : %d Mod %d = %d",a,b,a%b);
	printf("\nMu : %d ^ %d = %.2f",a,b,pow(a,b));
	printf("\nCan : sqrt(%d*%d) = %.2f",a,b,sqrt(a*b));
}
