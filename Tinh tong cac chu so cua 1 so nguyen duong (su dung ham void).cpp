#include<stdio.h>
int nhapSoNguyenDuong(){
    int n;
    do{
        printf("\nNhap n>0:");
        scanf("%d",&n);
    }while(n<=0);
    return n;
}
int tongCacChuSo(int n){
    int s=0;
    while(n!=0){
    	int du = n%10;
        s=s+du;
        n=n/10;
    }
    return s;
}
void xuatKetQua(int n){
    printf("Tong = ");
    int n1=n;
    while(n!=0){
    	int du =n%10;
        printf("%d+",du);
        n=n/10;
    }
    printf("\b = %d",tongCacChuSo(n1));
}
main(){
    int n;
    printf("Tinh tong cac chu so cua so nguyen duong");
    n = nhapSoNguyenDuong();
    xuatKetQua(n);
}
