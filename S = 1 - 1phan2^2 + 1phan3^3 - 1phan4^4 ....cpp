#include<stdio.h>
#include<math.h>
main(){
	int n,i;
	float s;
	printf("Tinh S = 1 - 1/2^2 - 1/3^3...+(-1)^(n-1)*1/n^n");
	do{
		printf("\nNhap n>0:");
		scanf("%d",&n);
	}while(n<=0);
	s=0;
	i=1;
	printf("\bTong S = ");
	while(i<=n){
		s=s+ pow(-1,i+1) + (1/pow(i,i));
		printf("1/(%d^%d) %c ",i,i,(i%2==0)?'+':'-');
		i=i+1;
	}
	printf("\b= %.4f",s);
}
