#include<stdio.h>
#include<math.h>
main(){
	float a,b,c,d;
	printf("Giai Ax^2 + Bx + C = 0\n");
	printf("Nhap A<>0:");
	scanf("%f",&a);
	printf("Nhap B:");
	scanf("%f",&b);
	printf("Nhap C:");
	scanf("%f",&c);
	printf("%.2fx^2 %c%.2f %c%.2f = 0\n",a,((b>=0)?'+':' '),b,((c>=0)?'+':' '),c);
	d = b*b - 4*a*c;
	if(a==0){
		if(b==0){			
			if(c==0)
			printf("vo so no");
			if(c!=0)
			printf("vo no");
		}
		if(b!=0) 
		    printf("%.2f",-c/b);
		}
	if(a!=0){
		d=b*b-4*a*c;
		if(d<0) 
		    printf("vo nghiem");
		if(d==0)
		    printf("x1=x2=%.2f",-b/(2*a));
		if(d>0){
			float x1= ((-b-sqrt(d))/2/a);
			float x2= ((-b+sqrt(d))/2/a);
			printf("x1= %.2f, x2= %.2f",x1,x2);
		}	
	}	
}
