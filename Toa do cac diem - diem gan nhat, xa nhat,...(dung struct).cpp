#include<stdio.h>
#include<math.h>
struct DiemOxy{
	int ox, oy;
};
DiemOxy nhap1Diem(int i){
	DiemOxy x;
	printf("Nhap diem %d:",i);
	scanf("%d%d",&x.ox,&x.oy);
	return x;
}
void xuat1Diem(DiemOxy x){
	printf("(%d,%d)",x.ox,x.oy);
}
int nhap1SoDuong(){
	int n;
	do{
		printf("Nhap so diem>0:");
		scanf("%d",&n);
	}while(n<=0);
	return n;
}
void nhapMangDiem(DiemOxy a[], int n){
	for(int i=0; i<n; i++){
		a[i] = nhap1Diem(i+1);
	}
}
void xuatMangDiem(char nd[], DiemOxy a[], int n ){
	printf("%s",nd);
	for(int i=0; i<n; i++)
		xuat1Diem(a[i]);
}
float khoangCach(DiemOxy x, DiemOxy y){
	return sqrt(pow(x.ox-y.ox,2)+ pow(x.oy-y.oy,2));
}
float modul(DiemOxy x){
	return sqrt(x.ox*x.ox+ x.oy*x.oy);
}
//1
DiemOxy min(DiemOxy a[], int n){
	DiemOxy min=a[0];
	for(int i=1; i<n; i++)
		if(modul(min) > modul(a[i]))
			min = a[i];
	return min;
}
void maxkhoangCach(DiemOxy a[], int n){
	DiemOxy x = a[0], y = a[1];
	for(int i=0; i<n-1; i++)
		for(int j=i+1; j<n; j++)
			if(khoangCach(x,y) < khoangCach(a[i], a[j])){
				x=a[i], y=a[j];
			}
	printf(" \nMax khoang cach: "); xuat1Diem(x); xuat1Diem(y);
	printf(" = %.4f",khoangCach(x,y));
}
int laTamGiac(float a, float b, float c){
	if(a+b>c && a+c>b && b+c>a) return 1;
	return 0;
}
float dienTich(DiemOxy a, DiemOxy b, DiemOxy c){
	float ab, ac, bc;
	ab = khoangCach(a,b);
	ac = khoangCach(a,c);
	bc = khoangCach(b,c);
	if(laTamGiac(ab,ac,bc)){
		float s,p;
		p = (ab+ac+bc)/2;
		s = sqrt(p*(p-ab)*(p-bc)*(p-ac));
		return s;
	}else return 0;
}
void maxTG(DiemOxy a[], int n){
	DiemOxy x=a[0], y=a[1], z=a[2];
	for(int i=0; i<n-2; i++)
		for(int j=i+1; j<n-1; j++)
			for(int k=j+1; k<n; k++)
				if(dienTich(x,y,z) < dienTich(a[i],a[j],a[k])){
					x = a[i]; y = a[j]; z = a[k];
				}
	printf(" \nMax Tam Giac: "); xuat1Diem(x); xuat1Diem(y); xuat1Diem(z);
	printf(" = %.4f",dienTich(x,y,z));
}
main(){
	DiemOxy a[100];
	int n;
	n = nhap1SoDuong();
	nhapMangDiem(a,n);
	xuatMangDiem("Cac diem:",a,n);
	DiemOxy y= min(a,n);
	printf("\n Diem gan tam nhat: "); xuat1Diem(y); printf("=: %.4f",modul(y));
	maxkhoangCach(a,n);
	maxTG(a,n); 
}
