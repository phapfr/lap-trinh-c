#include<stdio.h>
#include<stdlib.h>
int A[10][10];
int m, n; //m: hang, n: cot 
void nhapMT(){
	printf("Nhap hang:"); scanf("%d",&m);
	printf("Nhap cot:"); scanf("%d",&n);
	for(int i=1; i<m; i++)
		for(int j=1; j<n; j++){
			/*printf("Nhap a[%d][%d]=",i,j);
			int x;
			scanf("%d",&x);
			A[i][j] = x;*/
			A[i][j] = rand()%100;
		}
}
void xuatMT(){
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++)
			printf("%4d",A[i][j]);
		printf("\n");
	}
}
main(){
	nhapMT();
	xuatMT();
}
