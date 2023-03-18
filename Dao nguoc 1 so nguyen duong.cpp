#include<stdio.h>
main(){
	int x,s,du;
	printf("Nguyen Hong Phap");
	printf("\nDao nguoc cua 1 so nguyen duong");
	do{
		printf("\nNhap x>0:");
		scanf("%d",&x);
	}while(x<=0);
	s=0;
	printf("Dao nguoc(%d)=",x);
	while(x!=0){
	    du=x%10;
        x=x/10;
		s=s*10+du;
    }
	printf("%d",s);
} 

