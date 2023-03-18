#include<stdio.h>
main(){
	int x,s,du;
	printf("Nguyen Hong Phap");
	printf("\nTinh tong cac chu so cua 1 so nguyen duong");
	do{
		printf("\nNhap x>0:");
		scanf("%d",&x);
	}while(x<=0);
	s=0;
	printf("S(%d)=",x);
	while(x!=0){
	    du=x%10;
	    s=s+du;
	    x=x/10;
	    printf(" %d +",du);
	}
	printf("\b = %d",s);
}  
