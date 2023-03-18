#include<stdio.h>
main(){
	int *p, *q, a, b, x;
	float *pf, *qf, r;
	p = &a;
	pf = &r;
	a = 100;
	printf("a= %d, *p = %d",a, *p);
	*p = *p + 20;
	printf("\na=%d ", a);
	qf = new float;
	*qf = 3.2;
	printf("\n %.4f",*qf);
}
