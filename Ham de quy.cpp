#include<stdio.h>
#include<stdlib.h>
float giaiThua(int n){
	float s=1;
	for(int i=1; i<=n; i++)
		s = s* i;
	return s;
}
// dat F(int n) = giaiThua(int n)
float F(int n){ // ham de quy
	if(n==0) return 1;
	else return n*F(n-1);
}
main(){
	int n=7;
	printf("%d! = %.0f",n,giaiThua(n));
	printf("\n%d! = %.0f",n,F(n));
}
