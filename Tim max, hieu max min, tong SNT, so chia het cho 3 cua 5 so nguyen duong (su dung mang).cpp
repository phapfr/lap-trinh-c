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

//tim max
int max(int x[], int n){
	int a= x[0];
	for(int i=1; i<n; i++)
		if(a < x[i])
			a = x[i];
	return a;
}

//tim min
int min(int x[], int n){
	int a= x[0];
	for(int i=1; i<n; i++)
		if(a > x[i])
			a = x[i];
	return a;
}

//kiem tra so nguyen to
int kiemtraSNT(int x){
	int dem=0;
	for(int j=1;j<=x;j++){
		if(x%j==0) dem++;
	}
	if(dem==2) return 1;
	else return 0;
}

//tinh tong cac so nguyen to
int tongSNT(int x[], int n){
	int s=0;
	for(int i=1; i<=n; i++){
		if(kiemtraSNT(x[i])==1)
			s=s+x[i];
	}
	return s;
}

//xuat dong ket qua tinh tong cac so nguyen to
void xuatmangTongSNT(int x[], int n){
	printf("Tong cac so nguyen to = ");
	for(int i=0; i<n; i++){
		if(kiemtraSNT(x[i])==1)
		printf(" %d +",x[i]);
	}
	printf("\b=%d",tongSNT(x,n));
}

//tinh tong 2 phan tu lien tiep lon nhat
int tong2ptltlonnhat(int x[],int n){
	int a=x[0]+x[1];
	for(int i=1; i<n-1; i++){
		if(a<x[i]+x[i+1]) a=x[i]+x[i+1];
	}
	return a;
}

//tinh tong cac so chia het cho 3
void tongchiahet(int x[], int n){
	printf("\nTong cac so chia het cho 3 la:");
	int tongCH=0;
	for(int i=0; i<n; i++)
		if(x[i]%3==0){
			tongCH = tongCH+x[i];
			printf(" %d +",x[i]);
		}
		printf("\b= %d",tongCH);
}
main(){
	int n;
	int a[100];
	n = nhap1SoDuong();
	nhapMang(a,n);
	xuatMang(a,n);
	printf("\nMax = %d",max(a,n));
	printf("\nMax-Min = %d-%d = %d\n", max(a,n), min(a,n), max(a,n) - min(a,n));
	xuatmangTongSNT(a,n);
	printf("\nTong 2 phan tu lien tiep lon nhat = %d",tong2ptltlonnhat(a,n));
	tongchiahet(a,n);
}
