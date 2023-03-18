#include<stdio.h>
int nhap1SoDuong(){
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
int xuatMang(int x[], int n){
	printf("Cac so vua nhap:{");
	for(int i=0; i<n; i++)
		printf(" %d,",x[i]);
	printf("\b }");
}
int max(int x[], int n){
	int a= x[0];
	for(int i=1; i<n; i++)
		if(a<x[i]) a= x[i];
	return a;
}
main(){
	int n;
	int a[100];
	n=nhap1SoDuong();
	nhapMang(a,n);
	xuatMang(a,n);
	printf("\n Max = %d",max(a,n));
}
