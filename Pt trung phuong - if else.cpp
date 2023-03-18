#include<stdio.h>
#include<math.h>
main(){
	float a,b,c,d,t,t1,t2;
	printf("Nguyen Hong Phap\n");
	printf("Giai Ax^4 + Bx^2 + C = 0\n");
	printf("Nhap A<>0:");
	scanf("%f",&a);		
	printf("Nhap B:");
	scanf("%f",&b);
	printf("Nhap C:");
	scanf("%f",&c);	
	printf("%.2fx^4 %c%.2fx^2 %c%.2f = 0\n",a,((b>=0)?'+':' '),b,((c>=0)?'+':' '),c);
	d=b*b-4*a*c;
	if(d<0){
		printf("vo no");
	}
	else{
	t=-b/(2*a);
	    if(d==0){
		    if(t>0)
		        printf("%.2f,%.2f",sqrt(t),-sqrt(t));
		    else
		        printf("vo nghiem");
		}
	    else{
	    t1=((-b-sqrt(d))/(2*a));
	    t2=((-b+sqrt(d))/(2*a));
	        if(t1>0){
	        	if(t2>0)
			    printf("%.2f,%.2f,%.2f,%.2f",sqrt(t1),-sqrt(t1),sqrt(t2),-sqrt(t2));
			    else
				printf("%.2f,%.2f",sqrt(t1),-sqrt(t1));	
		    }
			else{			
			    if(t2>0)
				printf("%.2f,%.2f",sqrt(t2),-sqrt(t2));			    
			    else
				printf("vo nghiem");			
		    }
        }
    }
}
