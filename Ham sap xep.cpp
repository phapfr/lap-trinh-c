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
int max(int x[], int n){
	int a= x[0];
	for(int i=1; i<n; i++)
		if(a < x[i])
			a = x[i];
	return a;
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
	xuatMang("Cac so vua nhap:",a,n);
	sort(a, n);
	xuatMang("\nMang khong giam: ", a, n);
}

