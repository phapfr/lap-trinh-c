#include<stdio.h>
#include<math.h>
main(){
	int n;
	float s;
	printf("Tinh S(n) = 1 - 1/2! +2/3! - 3/4! + ... (-1)^n*n/ (n+1)!");
	printf("\nNhap n>0:");
	scanf("%d",&n);
	s=1;
	printf("S(%d) = 1",n);
	    for(int i=1; i<=n ; i++){
			int j = i + 1;
			float sgt = 1;
			for(int k=1; k<=j; k++){
				sgt= sgt*k;
			}
			if(i%2==1) s = s - i/sgt;
			else s = s + i/sgt;
		printf("%c %d/%d! ", (i%2==1) ? '-' : '+' , i , j);	
		}
		printf("= %.4f", s);
}
