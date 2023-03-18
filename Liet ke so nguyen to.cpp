#include<stdio.h>
main(){
	int x,i,s,n;
	printf("Liet ke so nguyen to");
	printf("\nNhap n>0:");
	scanf("%d",&n);
	for(x=1;x<=n;x++){
		s=0;
	for(i=1;i<=x;i++){	
		if(x%i==0) s=s+1;
	}
	if(s==2) printf("%d ",x);
    }
}
