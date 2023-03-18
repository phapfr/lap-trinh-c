#include<stdio.h>
int nhapSoNguyenDuong(){
	int x;
	do{
		printf("\nNhap n>0:");
		scanf("%d",&x);
	}while(x<=0);
	return x;
}
float tinhGiaiThua(int x){
	float s=1;
	for(int i=1; i<=x; i++)
		s=s*i;
	return s;
}
float tinhTong(int x){
	float s=1;
	for(int i=1; i<=x ; i++)
		if(i%2==1) s = s - i/tinhGiaiThua(i+1);
		else s = s + i/tinhGiaiThua(i+1);
	return s;
}
void xuatKetQua(int x){
	printf("S(%d) = 1 ",x);
	for(int i=1; i<=x; i++)
		if(i%2==1)
			printf("- %d/%d!",i,i+1);
		else
			printf("+ %d/%d!",i,i+1);
	printf("= %.4f",tinhTong(x));
}
main(){
	int n;
	printf("Tinh S(n) = 1 - 1/2! +2/3! - 3/4! + ... (-1)^n*n/ (n+1)!");
	n = nhapSoNguyenDuong();
	xuatKetQua(n);
}

