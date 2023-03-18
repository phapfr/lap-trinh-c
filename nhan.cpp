#include<stdio.h>
#include<stdlib.h>
int nhan(int a, int b){
    if(b==0) return 0;
    else return a + nhan(a,b-1);
}
main(){
	int a, b;
	printf("Nhap A, B:");
	scanf("%d%d",&a,&b);
	printf("%d * %d = %d",a,b,nhan(a,b));
}
