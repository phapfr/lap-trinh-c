#include<stdio.h>
#include<math.h>
main(){
	float a,b,c,d;
	printf("Tinh toan tren 2 phan so");
	printf("\nNhap phan so 1:");
	printf("\n\tTu:");
	scanf("%f",&a);
	printf("\tMau:");
	scanf("%f",&b);
	printf("Nhap phan so 2:");
	printf("\n\tTu:");
	scanf("%f",&c);
	printf("\tMau:");
	scanf("%f",&d);
	printf("Tong: (%.f/%.f) + (%.f/%.f) = %.f/%.f",a,b,c,d,(a*d+c*b),(b*d));
	printf("\nHieu: (%.f/%.f) - (%.f/%.f) = %.f/%.f",a,b,c,d,(a*d-c*b),(b*d));
	printf("\nTich: (%.f/%.f) * (%.f/%.f) = %.f/%.f",a,b,c,d,(a*c),(b*d));
	printf("\nThuong: (%.f/%.f) / (%.f/%.f) = %.f/%.f",a,b,c,d,(a*d),(b*c));
}
