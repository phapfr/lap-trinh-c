#include<stdio.h>
int nhapSoNguyenDuong(){
	int x;
	do{
		printf("Nhap n>0:");
		scanf("%d",&x);
	}while(x<=0);
	return x;
}
void nhapMang(int x[], int n){
	for(int i=0; i<n; i++){
		printf("Nhap phan tu thu %d: ", i+1);
		scanf("%d", &x[i]);
	}
}
int xuatMang(char nd[], int x[], int n){
	printf("%s{",nd);
	for(int i=0; i<n; i++)
		printf(" %d,",x[i]);
	printf("\b }");
}
void xoa(int x[], int &n, int k){
	for(int j=k; j<n-1; j++)
		x[j] = x[j+1];
	n--;
}
main(){
	int a[100],n;
	n = nhapSoNguyenDuong();
	nhapMang(a,n);
	xuatMang("Cac so vua nhap:",a,n);
	int x,k;
	do{
		printf("\nNhap chi so can xoa 0<= k < %d: ",n);
		scanf("%d",&k);
	}while(k<0 || k>=n);
	xoa(a,n,k);
	xuatMang("Mang sau xoa:",a,n);
}

