#include<stdio.h>
#include<math.h>
#include<stdlib.h>
main(){
	int t1,m1,t2,m2,s1,s2,t,m;
	char pt;
	printf("Tinh toan tren 2 phan so");
	    printf("\nNhap phan so 1:");
	    printf("\n\tTu:");
	    scanf("%d",&t1);
	do{
	    printf("\tMau<>0:");
	    scanf("%d",&m1);
    }while(m1<=0);
	    printf("Nhap phan so 2:");
	    printf("\n\tTu:");
	    scanf("%d",&t2);
	do{
	    printf("\tMau<>0:");
	    scanf("%d",&m2);
	}while(m2<=0);
	do{
		printf("Nhap phep toan(+,-,*,/):");
		fflush(stdin);
		scanf("%c",&pt);
	}while(pt!='+'&&pt!='-'&&pt!='*'&&pt!='/');
}
