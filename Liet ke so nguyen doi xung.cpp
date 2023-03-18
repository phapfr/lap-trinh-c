#include<stdio.h>
main(){
	int x,s,du,x1;
	printf("Nguyen Hong Phap");
	printf("\nKiem tra so nguyen doi xung");
	do{
		printf("\nNhap x>0:");
		scanf("%d",&x);
	}while(x<=0);
	s=0;
	x1=x;
	printf("%d = ",x);
	while(x!=0){
	    du=x%10;
		s=s*10+du;
        x=x/10;
    }
    printf("%d",s);
    if(s==x1)
	printf(" :Yes");
	else
	printf(" :No");
} 

