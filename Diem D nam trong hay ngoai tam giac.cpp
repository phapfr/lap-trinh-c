#include<stdio.h>
#include<math.h>
main(){
	int xa,ya,xb,yb,xc,yc,xd,yd;
	float ab,ac,bc,ad,bd,cd;
	float p,S;
	float p2,S2;
	float p3,S3;
	float p4,S4;
	float Stong;
	printf("Nguyen Hong Phap\n");
	printf("Nhap toa do 3 dinh tam giac ABC & diem D");
	printf("\nNhap diem A(x,y):"); 
	scanf("%d%d",&xa,&ya);
	printf("Nhap diem B(x,y):"); 
	scanf("%d%d",&xb,&yb);
	printf("Nhap diem C(x,y):"); 
	scanf("%d%d",&xc,&yc);
	printf("Nhap diem D(x,y):"); 
	scanf("%d%d",&xd,&yd);
	// Tinh do dai cac canh
	ab = sqrt(pow(xb-xa,2) + pow(yb-ya,2));
	ac = sqrt(pow(xc-xa,2) + pow(yc-ya,2));
	bc = sqrt(pow(xc-xb,2) + pow(yc-yb,2));
	ad = sqrt(pow(xd-xa,2) + pow(yd-ya,2));
	bd = sqrt(pow(xd-xb,2) + pow(yd-yb,2));
	cd = sqrt(pow(xd-xc,2) + pow(yd-yc,2));
	// Tinh nua chu vi & dien tich tam giac (Heron) 
	p = (ab+ac+bc)/2;
	S = sqrt(p*(p-ab)*(p-ac)*(p-bc));
	p2 = (ab+ad+bd)/2;
	S2 = sqrt(p2*(p2-ab)*(p2-ad)*(p2-bd));
	p3 = (ac+ad+cd)/2;
	S3 = sqrt(p3*(p3-ac)*(p3-ad)*(p3-cd));
	p4 = (bc+cd+bd)/2;
	S4 = sqrt(p4*(p4-bc)*(p4-cd)*(p4-bd));
	// 
	Stong = S2 + S3 + S4;
	if(Stong<=S+0.0001)
	    printf("D thuoc tam giac ABC");
	else
        printf("Diem D khong thuoc tam giac ABC");
}
