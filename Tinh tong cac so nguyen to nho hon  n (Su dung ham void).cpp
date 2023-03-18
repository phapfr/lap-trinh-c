#include<stdio.h>
int nhapSoNguyenDuong(){
    int x;
    do{
        printf("Nhap n>0:");
        scanf("%d",&x);
    }while(x<=0);
    return x;
}
int laNguyenTo(int x){
    int demUoc=0;
    for(int i=1; i<=x; i++)
        if(x%i==0) demUoc++;
    if(demUoc==2) return 1;
    else return 0;
}
int tongSoNT(int x){
    int s=0;
    for(int i=1; i<=x; i++)
        if(laNguyenTo(i)==1) 
			s=s+i;
    return s;
}
void xuatKetQua(int x){
    printf("Tong = ");
    for(int i=1; i<=x; i++){
        if(laNguyenTo(i)==1) 
			printf("%d + ",i);
    }
    printf("\b\b = %d", tongSoNT(x));
}
main(){
    int n;
    printf("Tinh tong cac so nguyen to <=n\n");
    n = nhapSoNguyenDuong();
    xuatKetQua(n);
}
