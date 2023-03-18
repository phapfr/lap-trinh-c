#include<stdio.h>
int nhapSoNguyenDuong(char c){
	int x;
	do{
		printf("Nhap so %c >0:",c);
		scanf("%d",&x);
	}while(x<=0);
	return x;
}
int ucln(int a, int b){
	while(a!=b)
		if(a>b)
			a=a-b;
		else
			b=b-a;
	return a;
}
int bcnn(int a, int b){
	return a*b/ucln(a,b);
}
void xuatKetQua(int a, int b){
	printf("UCLN(%d,%d) = %d", a, b, ucln(a,b));
	printf("\nBCNN(%d,%d) = %d", a, b, bcnn(a,b));
}
main(){
	int a,b;
	printf("Tim UCLN va BCNN cua 2 so nguyen duong\n");
	a = nhapSoNguyenDuong('A');
	b = nhapSoNguyenDuong('B');
    xuatKetQua(a,b);
}

