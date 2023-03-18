#include<stdio.h>
main(){
	int i,n,x,demDX,dao,tam;
	float s;
	printf("Tinh TBC cac so doi xung trong n so nguyen\n");
	do{
		printf("Nhap n>0: ");
		scanf("%d",&n);
	}while(n<=0);
	s=0;
	demDX=0;
	for (i=1;i<=n;i++){
		printf("Nhap so thu %d: ",i);
		scanf("%d",&x);
		tam=x;
		dao=0;
		while(tam!=0){
			dao=dao*10+tam%10;
			tam=tam/10;
		}
		if (dao==x&&x>10){
			s=s+x;
			demDX++;
		}
	}
	if(demDX==0) printf("TBC=0");
	if(demDX!=0) printf("TBC=%f",s/demDX);
}

