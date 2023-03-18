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
void nhapNoiDungChen(int &k, int &x, int n){
	do{
		printf("\nNhap chi so chen: 0=< k <= %d:",n);
		scanf("%d",&k);
	}while(k<0 || k>n);
	printf("Nhap gia tri can chen: ");
	scanf("%d",&x);
}
void chen(int a[], int &n , int giaTri, int chiSo){
	for(int j=n-1; j>=chiSo; j--)
		a[j+1] = a[j];
	a[chiSo]= giaTri;
	n++;
}
main(){
	int a[100],n;
	n = nhapSoNguyenDuong();
	nhapMang(a,n);
	xuatMang("Cac so vua nhap:",a,n);
	int x,k;
	nhapNoiDungChen(k,x,n); //k la chi so chen, x la gia tri chen
	chen(a,n,x,k);
	xuatMang("Mang sau chen:",a,n);
}

