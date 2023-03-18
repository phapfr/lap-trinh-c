#include<stdio.h>
#include<math.h>
main(){
	int n,s,s1,s2;
	printf("Nhap n>0:");
	scanf("%d",&n);
	if(n==1) printf("1");
	if(n==2) printf("1 1");
	if(n>2){
		printf(" 1 1 ");
		s1=1, s2=1;
		for(int i=3; i<=n; i++){
			s=s1+s2;
			printf(" %d ",s);
			s2=s1;
			s1=s;
		}
	}
}
