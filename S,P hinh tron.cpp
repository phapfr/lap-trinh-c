#include<stdio.h>
main(){
	float r;
	printf("Tinh S va P cua hinh tron");
	printf("\nNhap ban kinh:");
	scanf("%f",&r);
	printf("S = %.2f * %.2f * 3.1415 = %.2f",r,r,r*r*3.1415);
	printf("\nP = %.2f * 2 * 3.1415  = %.2f",r,r*2*3.1415);
}
