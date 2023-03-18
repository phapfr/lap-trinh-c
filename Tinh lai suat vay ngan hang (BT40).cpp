#include<stdio.h>
main(){
	int n,i;
	float a,k,s;
	printf("Nhap so tien vay:");
	scanf("%f",&a);
	printf("Nhap lai suat:");
	scanf("%f",&k);
	printf("Nhap so so thang vay:");
	scanf("%d",&n);
	s=a;
	for(i=1;i<=n;i++)
		s=s+s*k;
		printf("So tien phai tra sau thang thu %d la %.f",i,s);
}
