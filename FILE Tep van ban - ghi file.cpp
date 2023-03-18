#include<stdio.h>
#include<string.h>
#include<ctype.h>
void docFile(char tenFile[], int a[], int &n){
	FILE *fptr;
	fptr = fopen (tenFile, "r");
	if(fptr != NULL)
	{
		fscanf(fptr,"%d",&n);
		for(int i=0; i<n; i++)
			fscanf(fptr,"%d",&a[i]);
		fclose(fptr);
	}
	else
		printf("ERROR: Khong mo duoc tep");
}
void docFile2(char tenFile[], int a[], int &n){
	FILE *fptr;
	fptr = fopen (tenFile, "r");
	if (fptr != NULL)
	{
		n=0;
		while(feof(fptr)==0)
			if(fscanf(fptr,"%d", &a[n])>0)
				n++;
		fclose(fptr);
	}
	else
		printf("ERROR: Khong mo duoc tep");
}
void xuatMang(int a[], int n){
	for(int i=0; i<n; i++)
		printf("%d",a[i]);
}
int laNguyenTo(int x){
	if(x<2) return 0;
	for(int i=2; i<=x/2; i++)
		if(x%i==0) return 0;
	return 1;
}
void ghiFile(char tenFile[], int a[], int n){
	FILE *fptr;
	fptr = fopen (tenFile, "w");
	if (fptr != NULL)
	{
		int s=0;
		fprintf(fptr,"Cac so nguyen to: ");
		for(int i=0; i<n; i++)
			if(laNguyenTo(a[i])==1){
				s = s + a[i];
				fprintf(fptr," %d ",a[i]);
				}
		fprintf(fptr,"Co tong %d",s);
		fprintf(fptr,"\nCac hop so: ");
		for(int i=0; i<n; i++)
			if(laNguyenTo(a[i])==0){
				fprintf(fptr," %d ",a[i]);
			}
		fclose(fptr);
	}
	else
		printf("ERROR: Khong mo duoc tep");
}
main(){
	int a[100], n=0;
	char ten[20];
	printf("Nhap ten file:");
	gets(ten);
	docFile2(ten, a, n);
	//xuatMang(a,n);
	printf("Nhap ten file de ghi: ");
	gets(ten);
	ghiFile(ten, a, n);
}
