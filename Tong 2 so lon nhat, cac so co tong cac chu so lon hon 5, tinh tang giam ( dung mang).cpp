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
int xuatMang(int x[], int n){
	printf("Cac so vua nhap:{");
	for(int i=0; i<n; i++)
		printf(" %d,",x[i]);
	printf("\b }");
}
int max(int x[], int n){
	int a= x[0];
	for(int i=1; i<n; i++)
		if(a < x[i])
			a = x[i];
	return a;
}
int tongMaxCua2So1(int x[], int n){
	int sum = x[0] + x[1];
	for(int i=0; i<n-1; i++)
		for(int j=i+1; j<n; j++)
			if(sum<x[i] + x[j])
				sum = x[i] +x[j];
	return sum;
}
int tongMaxCua2So2(int x[], int n){
	int m1=0;
	for(int i=1; i<n; i++)
		if(x[m1]<x[i]) m1=i;
	int m2=0;
	for(int j=0; j<n; j++)
		if(x[m2]<x[j] && j!=m1)
			m2 = j;
	return x[m1] + x[m2];
}
int tongCacChuSo(int x){
	int s = 0;
	while(x!=0){
		s = s + x%10;
		x = x/10;
	}
	return s;
}
void lietKeCacSocoTongCacChuSoLonHon5(int x[],int n){
	printf("\nCac so co tong cac chu so >5 = ");
	for(int i=0;i<n;i++)
		if(tongCacChuSo(x[i])>5) 
			printf("%d ",x[i]);
	printf("\b ");
}
int khongGiam(int x[], int n){
	for(int i=0; i<n-1; i++)
		if(x[i]>x[i+1]) return 0;
	return 1;
}
void sort(int x[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (x[i] > x[j])
			{
				int t = x[i];
				x[i] = x[j];
				x[j] = t;
			}
}
main(){
	int n;
	int a[100];
	n = nhapSoNguyenDuong();
	nhapMang(a,n);
	xuatMang(a,n);
	printf("\nTong max cua 2 so = %d",tongMaxCua2So2(a,n));
	lietKeCacSocoTongCacChuSoLonHon5(a,n);
	sort(a, n);
	xuatMang("\nMang khong giam: ", a, n);
}
