#include<stdio.h>
int nhapSoNguyenDuong(){
    int x;
    do{
        printf("Nhap so nguyen >0:");
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
float tinhTBC(int x){
    float s=0;
    int dem=0;
    for(int i=1; i<=n; i++){
        if(laNguyenTo(i)==1){
            s=s+i;
            dem++;
        }
    }
    s=s/dem;
    return s;
}
void xuatKetQua(int n){
    printf("TBC = (");
    int dem=0;
    for(int i=1; i<=n; i++){
        if (laNguyenTo(i)==2){
            printf("%d+", i);
            dem++;
        }
    }
    printf("\b)/%d = %.4f",dem,tinhTBC(n));
}
main(){
    int n;
    printf("Tinh TBC cac so nguyen to <=n\n");
    n = nhapSoNguyenDuong();
    xuatKetQua(n);
}
