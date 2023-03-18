#include<stdio.h>
#include<stdlib.h>
int mu(int x, int y){
    if(y==1) return x;
    else return x * mu(x,y-1);
}
main(){
	int x, y;
	printf("Nhap x, y:");
	scanf("%d%d",&x,&y);
	printf("%d^%d = %d",x,y,mu(x,y));
}
