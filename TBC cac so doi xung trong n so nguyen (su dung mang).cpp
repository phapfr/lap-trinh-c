#include<stdio.h>
#include<math.h>
int nhapSo(){
	int x;
	do{
		printf("Nhap so >0:");
		scanf("%d",&x);
	}while(x<=0);
	return x;
}
void nhapMang(int a[],int x){
	for(int i=0; i<x; i++){
		printf("Nhap phan tu thu %d:",i+1);
		scanf("%d", &a[i]);
	}
}
void xuatMang(int a[], int x){
	printf("a={");
	for(int i=0; i<x; i++)
		printf("%d,",a[i]);
	printf("\b}\n");
}
int daoSo(int x){
	int s=0;
	while(x!=0){
		int du=x%10;
		s=s*10+du;
		x=x/10;
	}
	return s;
}

//kiem tra so doi xung
int ktdx(int x){
	if(x>10 && daoSo(x)==x)
		return 1;
	return 0;
}

//tinh tong cac so doi xung
int tongdx(int a[], int x){
	int s=0;
	for(int i=0; i<x; i++)
		if(ktdx(a[i])==1)
			s=s+a[i];
	return s;
}

//xuat dong ket qua tinh TBC so doi xung
void xuatKQ(int a[], int x){
	int dem=0;
	printf("TB dx: ");
	for(int i=0; i<x; i++){
		if(ktdx(a[i])==1){
			printf("%d+",a[i]);
			dem++;
			}
		}
	float TB=1.0*tongdx(a,x)/dem;
	printf("\b/%d = %.2f",dem,TB);
}
main(){
	int n;
	int a[100];
	n=nhapSo();
	nhapMang(a,n);
	xuatMang(a,n);
	xuatKQ(a,n);
}
