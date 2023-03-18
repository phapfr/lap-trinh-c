#include<stdio.h>
main(){
	int x;
	printf("Nguyen Hong Phap\n");
	printf("Hien thi so nguyen <=10 duoi dang chu\n");
	printf("Nhap gia tri nguyen (0<=x>=10):");
	scanf("%d",&x);
	switch(x){
		case 0:printf("Khong"); break;
		case 1:printf("Mot"); break;
		case 2:printf("Hai"); break;
		case 3:printf("Ba"); break;
		case 4:printf("Bon"); break;
		case 5:printf("Nam"); break;
		case 6:printf("Sau"); break;
		case 7:printf("Bay"); break;
		case 8:printf("Tam"); break;
		case 9:printf("Chin"); break;
		case 10: printf("Muoi"); break;
	    default:
		printf("Khong doi");
    }
}
