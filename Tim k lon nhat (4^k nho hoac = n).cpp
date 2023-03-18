#include<stdio.h>
main(){
	int n,k,mu;
	printf("Nhap n>0:");
	scanf("%d",&n);
	mu=1;
	k=0;
	while(mu<n){
		mu=mu*2;
		k++;
	}
	printf("K=%d",k);
}
