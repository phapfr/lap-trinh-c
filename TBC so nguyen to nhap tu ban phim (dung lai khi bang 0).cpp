#include<stdio.h>
main(){
	int x, tongNT=0;
	while(1){
		printf("Nhap so nguyen >0 (dung khi bang 0):");
		scanf("%d",&x);
		if(x==0) break; //dung vong lap while
		int demUoc=0;
		for(int i=1; i<=x; i++)
			if(x%i==0) demUoc++;
		if(demUoc!=2) continue;
		tongNT= tongNT+x;	
	}
	printf("Tong cac so nguyen to = %d", tongNT);
}
