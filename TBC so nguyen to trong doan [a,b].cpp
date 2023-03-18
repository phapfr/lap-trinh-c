#include<stdio.h>
#include<math.h>
main(){
	int a,b,demNT,demUoc;
	float s;
	printf("Tinh TBC cac so nguyen to trong doan [a..b]");
	do{
		printf("\nNhap a>0:");
		scanf("%d",&a);
	}while(a<=0);
	do{
		printf("Nhap b>10:");
		scanf("%d",&b);
	}while(b<=10);
	s=0;
	demNT=0;
	printf("Tinh TBC so nguyen to trong [%d..%d]\n",a,b);
	for(int x=a;x<=b;x++){
		demUoc=0;
		for(int j=1;j<=x;j++){
			if(x%j==0){
				demUoc=demUoc+1;
			}
		}
		if(demUoc==2){
			demNT++;
			demNT==1?printf("("):printf("");
			printf("%d +",x);
			s=s+x;	
		}
	}
	if(demNT==0)
		printf("0");
	if(demNT!=0)
		printf("\b) / %d = %.2f",demNT,s/demNT);
}
