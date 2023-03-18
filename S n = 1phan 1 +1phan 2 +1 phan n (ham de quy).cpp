#include<stdio.h>
#include<stdlib.h>
// s(n) = 1/1 +1/2 + ... + 1/n
float Tong(int n){
	float s=0;
	for(int i=1; i<=n; i++)
		s = s + 1.0/i;
	return s;
}
float S(int n){
	if(n==0) return 0;
	else return 1.0/n + S(n-1);
}
main(){
	int n=7;
	printf("%d = %.6f",n,Tong(n));
	printf("\n%d = %.6f",n,S(n));
}
