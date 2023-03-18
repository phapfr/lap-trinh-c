#include<stdio.h>
#include<string.h>
#include<conio.h>
struct SV{
	char ma[15], hoTen[30], que[30];
	int gioiTinh;
	float diem;
};
SV nhap1SV(int i){
	SV x;
	printf("Nhap sinh vien thu %d:\n",i);
	printf("\tMa: "); fflush(stdin); gets(x.ma);
	printf("\tHo ten: "); fflush(stdin); gets(x.hoTen);
	printf("\tQue quan: "); fflush(stdin); gets(x.que);
	do{
		printf(" \t Gioi tinh (1: Nam, 0: Nu):");
		scanf("%d",&x.gioiTinh);
	}while(x.gioiTinh!=0 && x.gioiTinh!=1);
	do{
		printf(" \t 0<=Diem<=10: ");
		scanf("%f",&x.diem);
	}while(x.diem<0 || x.diem>10);
	return x;
}
void xuat1SV(SV x){
	printf("\n %15s %20s %20s %5s %.2f",x.ma, x.hoTen, x.que, (x.gioiTinh?"Nam":"Nu"),x.diem);
}
void nhapDSSV(SV a[], int n){
	for(int i=0; i<n; i++)
		a[i] = nhap1SV(i+1);
}
void xuatDSSV(char nd[], SV a[], int n){
	printf("%s", nd);
	for(int i=0; i<n; i++)
		xuat1SV(a[i]);
}
void congDiem(SV a[], int n){
	for(int i=0; i<n; i++)
		if(strcmp(a[i].que,"Nghe An") == 0)
			a[i].diem = a[i].diem + 0.5;
}
void xoa(SV a[], int &n, int k){
	for(int j=k; j<n-1; j++)
		a[j] = a[j+1];
	n--;
}
void xoaAllx(SV a[], int &n, float x){
	int i=0;
	while(i<n)
		if(a[i].diem<x)
			xoa(a,n,i);
		else i++;
}
void giamDanTheoDiem(SV a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].diem < a[j].diem)
			{
				SV t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
}
main(){
	SV a[100];
	int n;
	do{
		printf(" Nhap so SV>0: ");
		scanf("%d", &n);
	}while(n<=0);
	nhapDSSV(a,n);
	xuatDSSV("DSSV vua nhap",a,n);
	getch();
	congDiem(a,n);
	xuatDSSV("\nDSSV sau khi cong diem ",a,n);
	getch();
	xoaAllx(a,n,5);
	xuatDSSV("\nDSSV sau khi xoa cac SV yeu ",a,n);
	giamDanTheoDiem(a, n);
	xuatDSSV("\nDSSV sau khi sap xep giam dan theo diem: ", a, n);
}
