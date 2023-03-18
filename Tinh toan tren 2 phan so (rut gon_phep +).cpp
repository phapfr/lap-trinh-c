#include<stdio.h>
#include<math.h>
main(){
	int t1,m1,t2,m2,tu,mau,s1,s2;
	char pt;
	printf("Tinh toan tren 2 phan so");
	    printf("\nNhap phan so 1:");
	    printf("\n\tTu:");
	    scanf("%d",&t1);
	do{
	    printf("\tMau>0:");
	    scanf("%d",&m1);
    }while(m1<=0);
	    printf("Nhap phan so 2:");
	    printf("\n\tTu:");
	    scanf("%d",&t2);
	do{
	    printf("\tMau>0:");
	    scanf("%d",&m2);
	}while(m2<=0);
	printf("Nhap phep toan(+,-,*,/):");
	fflush(stdin);
	scanf("%c",&pt);
	s1=t1*m2+t2*m1;
	s2=m1*m2;
	tu=s1;
	mau=s2;
	if(s1*s2!=0){
		s1=abs(s1);
		s2=abs(s2);
		while(s1!=s2){
			if(s1>s2) s1=s1-s2;
			else s2=s2-s1;	
		}
		tu=tu/s1;
		mau=mau/s1;
	}
	printf(" %.d/%.d + %.d/%.d = %.d/%.d ",t1,m1,t2,m2,tu,mau);
}
