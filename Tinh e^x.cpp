#include<stdio.h>
#include<math.h>
main(){
	int x,n,i;
	double s,mu,gt;
	printf("Chuong trinh tinh e^x");
    printf("\nNhap vao x>0:");
    scanf("%d",&x);
    printf("Nhap vao n>0:");
    scanf("%d",&n);
	s=1;
	mu=1;
	gt=1;
	for(i=1;i<=n;i++){
		mu=mu*x;
		gt=gt*i;
		s=s+(mu/gt);	
	}
	printf("e^%d=%.20f",x,s);
	printf("\n    %.20f",exp(x));
}
