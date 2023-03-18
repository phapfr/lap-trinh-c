#include<stdio.h>
main(){
	int x,du;
	float s;
	printf("Nguyen Hong Phap");
	printf("\nTinh tong dao nguoc cac chu so cua 1 so nguyen duong");
	do{
		printf("\nNhap x>0:");
		scanf("%d",&x);
	}while(x<=0);
	s=0;
	printf("S(%d)=",x);
	while(x!=0){
	    du=x%10;
	    s=s+1.0/du;
	    x=x/10;
	    printf(" 1/%d +",du);
	}
	printf("\b = %.4f",s);
}  
