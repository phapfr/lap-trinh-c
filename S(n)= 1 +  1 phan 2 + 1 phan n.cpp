#include<stdio.h>
main(){
	int n,i;
	float s;
	printf("Tinh S(n) = 1 + 1/2 + ... + 1/n");
	do{
		printf("\nNhap n>0:");
		scanf("%d",&n);
    }while(n<=0);
	s=0;
	i=1;
	printf("S(%d) =",n);
    while(i<=n){
    	s= s+ 1.0/i;
    	printf("1/%d +",i);
    	i++;
    }
    printf("\b = %.4f",s);
}
