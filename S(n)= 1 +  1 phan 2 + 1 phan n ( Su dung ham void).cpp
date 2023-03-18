#include<stdio.h>
int nhapSoNguyenDuong(){
	int x;
	do{
		printf("\nNhap n>0:");
		scanf("%d",&x);
	}while(x<=0);
	return x;
}
float tinhTong(int n){
	float s=0;
	for(int i=1; i<=n; i++) s = s + 1.0/i;
	return s;
}
void xuatKetQua(int n){
	printf("S(%d) = ",n);
	for(int i=1; i<=n; i++)
		printf("1/%d +",i);
	printf("\b= %.4f",tinhTong(n));
}
main(){
	int n;
	printf("Tinh S(n) = 1 + 1/2 + 1/3 +...+ 1/n");
	n = nhapSoNguyenDuong();
	xuatKetQua(n);
}

