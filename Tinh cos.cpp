#include<stdio.h>
#include<math.h>
main(){
	double x,s,mu,gt;
	int n;
	x=60*M_PI/180;
	printf("Nhap n>0:");
	scanf("%d",&n);
	s=1;
	gt=1;
	mu=1;
	for(int i=2; i<=n; i=i+2){
		gt=gt*(i-1)*i;
		mu=mu*x*x;
		if((i/2)%2==1) s=s-mu/gt;
		else s=s+mu/gt;	
	}
	printf("%.20lf",s);
	printf("\n%.20lf",cos(x));
}
