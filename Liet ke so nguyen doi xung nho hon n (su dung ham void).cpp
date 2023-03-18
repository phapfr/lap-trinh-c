#include<stdio.h>
int nhapSoNguyenDuong(){
	int x;
	do{
		printf("\nNhap n>0:");
		scanf("%d",&x);
	}while(x<=0);
	return x;
}
int daoSo(int x){
	int s=0;
	while(x!=0){
		int du = x%10;
		s=s*10+du;
		x=x/10;
	}
	return s;
}
int laDoiXung(int x){
	if(x>10 && daoSo(x)==x) return 1;
	return 0;
}
void xuatKetQua(int x){
	for(int i=1; i<=x; i++)
		if(laDoiXung(i)==1)
			printf(" %d ",i);
}
main(){
	int n;
	printf("Liet ke so doi xung <=n");
	n = nhapSoNguyenDuong();
	xuatKetQua(n);
}
