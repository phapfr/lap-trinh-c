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
int tim(int x[], int &n, int giaTri){
	for(int i=0; i<n; i++)
		if(x[i] == giaTri)return i;
	return -1;
}
main(){
	int a[100],n;
	n = nhapSoNguyenDuong();
	nhapMang(a,n);
	xuatMang("Cac so vua nhap:",a,n);
	int x,k;
	printf("\nNhap gia tri can tim: ");
	scanf("%d",&x);
	k = tim(a,n,x);
	if(k==-1) printf("Khong co %d trong mang",x);
	else printf("%d o chi so %d",x,k);
}

