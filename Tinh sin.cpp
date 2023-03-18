#include<stdio.h>
#include<math.h>
main(){
	double x,s,mu,gt;
	int n;
	x=30;
	printf("Nhap n>0:");
	scanf("%d",&n);
	x=x*M_PI/180;
	s=x;
	gt=1;
	mu=x;
	for(int i=3; i<=n; i=i+2){
		gt=gt*(i-1)*i;
		mu=mu*x*x;
		if((i/2)%2==1) s=s-mu/gt;
		else s=s+mu/gt;	
	}
	printf("%.30lf",s);
	printf("\n%.10lf", sin(30*M_PI/180));
}
