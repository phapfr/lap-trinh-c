#include<stdio.h>
#include<math.h>
main(){
	float a,b,c,d,x1,x2;
	printf("Nguyen Hong Phap\n");
	printf("Giai Ax^2 + Bx + C >= 0\n");
	printf("Nhap A<>0:");
	scanf("%f",&a);	
	printf("Nhap B:");
	scanf("%f",&b);
	printf("Nhap C:");
	scanf("%f",&c);	
	printf("%.2fx^2 %c%.2fx %c%.2f >= 0\n",a,((b>=0)?'+':' '),b,((c>=0)?'+':' '),c);
	d=b*b-4*a*c;
	if(d<0){
		if(a>0)
		printf("(--,++)"); 		
		else
		printf("vo no");
	}
	else{	
	    if(d==0){
		    if(a>0)
		        printf("(--,++)");
		    else
		        printf("%.2f",-b/(2*a));
		}
	    else{
	    x1=((-b-sqrt(d))/(2*a));
	    x2=((-b+sqrt(d))/(2*a));
	        if(a>0){	        	
			    printf("(--,%.2f]v[%.2f,++)",x1,x2);
				}			    
			else
				printf("[%.2f,%.2f]",x2,x1);					
        }
    }
}
