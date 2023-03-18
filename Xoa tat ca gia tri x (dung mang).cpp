#include<stdio.h>
#include<cstdlib>
#include<ctime>
int nhapsoduong (){
	int x;
	do {
		printf ("nhap n>0: ");
		scanf ("%d",&x);
	}while (x<=0);
	return x;
}
void nhapmang (int x[], int n){
	srand(time(NULL));
	for (int i=0;i<n;i++){
		x[i]= rand()%5;
	}
}
void xuatmang (char nd[],int x[],int n){
	printf ("%s",nd);
	for (int i=0;i<n;i++){
		printf (" %d ",x[i]);
	}
	printf ("\b }");
}
void xoa (int x[], int &n,int k){
	for (int j=k;j<n-1;j++)
		x[j]=x[j+1];
	n--;
}
void xoaAll(int a[],int &n,int x){
	int i=0;
	while (i<n)
		if (a[i]==x)
			xoa(a,n,i);
		else i++;
}
main (){
	int a[100],n;
	n=nhapsoduong ();
	nhapmang (a,n);
	xuatmang("mang vua nhap ",a,n);
	int x;
	printf ("\n nhap gia tri can xoa: ");
	scanf ("%d",&x);
	xoaAll (a,n,x);
	xuatmang("\nMang sau xoa: ",a,n);
}
