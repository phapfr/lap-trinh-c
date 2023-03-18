#include<stdio.h>
#include<stdlib.h>
void nhapMang(int *a, int n){
	for(int i=0; i<n; i++){
		a[i] = rand() %100;
	}
}
void xuatMang(int *a, int n){
	for(int i=0; i<n; i++)
		printf("%5d",*(a+i));
}
int tongChan(int *a, int n){
	int s=0;
	printf("\nTong cac so chan = ");
	for(int i=0; i<n; i++)
		if(*(a+i) % 2==0){
			printf(" %d +",*(a+i));
			s = s+ *(a+i);
		}
	printf("\b = %d", s);
}
main(){
	int *a= new int[100];
	int n=10;
	nhapMang(a,n);
	xuatMang(a,n);
	tongChan(a,n);
}
