#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
	int t1,m1,t2,m2,s1,s2,t,m;
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
	if(pt!='+'&&pt!='-'&&pt!='*'&&pt!='/'){
		printf("Ko tinh");
		exit(0);
	}
	if(t2==0&&pt=='/'){
		printf("Khong chia 0");
		exit(0);
	}
	if(pt=='+'){
		t=t1*m2+t2*m1;
		m=m1*m2;
	}
	if(pt=='-'){
		t=t1*m2-t2*m1;
		m=m1*m2;
	}
	if(pt=='*'){
		t=t1*t2;
		m=m1*m2;
	}
	if(pt=='/'){
		t=t1*m2;
		m=t2*m1;
	}
	s1=t;
	s2=m;
	if(s1*s2!=0){
		s1=abs(s1);
		s2=abs(s2);
		while(s1!=s2){
			if(s1>s2)
				s1=s1-s2;
			else 
				s2=s2-s1;
	    }
	    t=t/s1;
	    m=m/s2;
	}
	printf("%d/%d %c %d/%d = %d/%d",t1,m1,pt,t2,m2,t,m);
}
	
	
	

