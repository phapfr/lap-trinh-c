#include<stdio.h>
main(){
	int x,du,dem;
	float s;
	printf("Nguyen Hong Phap");
	printf("\nTinh TBC chu so chan cua 1 so nguyen duong");
	do{
		printf("\nNhap x>0:");
		scanf("%d",&x);
	}while(x<=0);
	s=0;
	dem=0;
	printf("TBC(%d)=(",x);
	while(x!=0){
	    du=x%10;
        x=x/10;
        if(du%2==0){
		    s=s+du;
		    dem++;
            printf(" %d +",du);
        }
    }	
    printf("\b) /%d=%.4f",dem,s/dem);
}
