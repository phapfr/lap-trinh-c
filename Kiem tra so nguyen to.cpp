#include<stdio.h>
main(){
	int x,i,a,s;
	printf("Kiem tra so nguyen to");
	printf("\nNhap x:");
	scanf("%d",&x);
	s=0;
	for(i=1;i<=x;i++){
		a=x%i;
		if(a==0) 
			s=s+1;
	}
	if(s==2) printf("%d:Yes",x);
	else printf("%d:No",x);
} 
