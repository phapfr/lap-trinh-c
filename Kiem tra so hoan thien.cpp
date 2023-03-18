#include<stdio.h>
main(){
	int x,i,a,s;
	printf("Kiem tra so hoan thien");
	printf("\nNhap x:");
	scanf("%d",&x);
	s=0;
	for(i=1;i<=x/2;i++){
		a=x%i;
		if(a==0) s=s+i;
	}
	if(s==x) printf("%d:Yes",x);
	else printf("%d:No",x);
}
