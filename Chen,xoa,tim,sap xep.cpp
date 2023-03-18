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
		x[i]= rand()%100;
	}
}
void xuatmang (char nd[],int x[],int n){
	printf ("%s",nd);
	for (int i=0;i<n;i++){
		printf (" %d ",x[i]);
	}
	printf ("\b }");
}
void nhapNoiDungChen (int &k, int&x, int n){
	do {
		printf ("\nnhap chi so chen : 0=< k <= %d: ",n);
		scanf ("%d",&k);
	}while (k<0||k>n);
	printf ("nhap gia tri can chen: ");
	scanf ("%d", &x);
}
void chen (int a[], int&n, int giaTri, int chiSo){
	for (int j=n-1;j>=chiSo;j--)
		a[j+1]=a[j];
	a[chiSo]= giaTri;
	n++;
}
void xoa (int x[], int &n,int k){
	for (int j=k;j<n-1;j++)
		x[j]=x[j+1];
	n--;
}
int tim (int x[],int &n, int giaTri){
	for (int i=0;i<n;i++)
		if (x[i]== giaTri) return i;
	return -1;
}
void sort (int x[],int n){
	for (int i=0;i<n-1;i++)
		for (int j=i+1;j<n;j++)
			if (x[i]>x[j]){
				int t=x[i];
				x[i]=x[j];
				x[j]=t;
			}
}
main (){
	int n;
	int a[100];
	n=nhapsoduong();
	nhapmang (a,n);
	xuatmang("cac so vua nhap : {",a,n);
	int x,k;
	nhapNoiDungChen (k,x,n);
	chen(a,n,x,k);
	xuatmang ("cac so sau khi chen",a,n);
	// mang xoa
	do{
		printf ("\nNhap chi so can xoa 0<=k<%d :",n);
		scanf ("%d",&k);
	}while (k<0|| k>=n);
	xoa (a,n,k);
	xuatmang ("cac so sau khi xoa",a,n);
	// mang tim
	printf ("\nNhap gia tri can tim : ");
	scanf ("%d",&x);
	k=tim(a,n,x);
	if (k==-1) printf ("khong co %d trong mang",x);
	else printf (" %d o chi so %d",x,k);
	// sort
	sort (a,n);
	xuatmang("\nMang khong giam: ", a, n);
}
