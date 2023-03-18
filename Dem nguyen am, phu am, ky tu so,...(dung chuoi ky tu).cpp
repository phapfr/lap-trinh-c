#include <stdio.h>
#include <ctype.h>
#include <string.h>
int demNguyenAm(char st[]){
	int dem = 0;
	for (int i = 0; i < strlen(st); i++){
		char c = tolower(st[i]);
		if (c == 'a' || c == 'e' || c == 'u' || c == 'i' || c == 'o')
			dem++;
	}
	return dem;
}
int demPhuAm(char st[]){
	int dem = 0;
	for (int i = 0; i < strlen(st); i++){
		char c = tolower(st[i]);
		if ((c>='a' && c<='z') && !(c == 'a' || c == 'e' || c == 'u' || c == 'i' || c == 'o'))
			dem++;
	}
	return dem;
}

int demSo(char st[]){
	int dem = 0;
	for (int i = 0; i < strlen(st); i++)
		if (st[i] >= '0' && st[i] <= '9')
			dem++;
	return dem;
}
int demKyTuTrang(char st[]){
	int dem = 0;
	for (int i = 0; i < strlen(st); i++)
		if (st[i] == ' ')
			dem++;
	return dem;
}
int demTu(char st[]){
	int dem = 0;
	if(st[0]!=' ') dem++;
	for (int i = 1; i < strlen(st); i++)
		if (st[i-1] == ' ' && st[i] != ' ')
			dem++;
	return dem;
}
int demKyTuDacBiet(char st[]){
	return strlen(st) - demKyTuTrang(st) - demSo(st) - demNguyenAm(st) - demPhuAm(st);
}
void xoa(char st[], int k){
	for(int i=k; i<strlen(st); i++)
		st[i] = st[i+1];
}
void xoaAllKyTuTrangDu(char st[]){
	//xoa vi tri dau tien
	while(st[0]==' ') xoa(st,0);
	//xoa ky tu trang du o cuoi
	while(st[strlen(st)-1]==' ') st[strlen(st) - 1]='\0';
	//xoa ky tu trang du o giua
	int i=1;
	while(i<strlen(st))
		if(st[i]==' '&& st[i-1]==' ')
			xoa(st, i);
		else i++;
}
void proper(char st[]){
	st[0] = toupper(st[0]);
	for(int i=1; i<strlen(st); i++)
		if(st[i]!=' ' && st[i-1]==' ') st[i] = toupper(st[i]);
		else st[i] = tolower(st[i]);
}
main(){
	char st[100];
	printf("Nhap 1 chuoi: ");
	gets(st);
	printf("Chuoi vua nhap: %s:", st);
	printf("\n1. So nguyen am trong chuoi la: %d", demNguyenAm(st));
	printf("\n2. So phu am trong chuoi la: %d", demPhuAm(st));
	printf("\n3. So ki tu so trong chuoi la: %d", demSo(st));
	printf("\n4. So ki tu trang trong chuoi la: %d", demKyTuTrang(st));
	printf("\n5. So ky tu dac biet: %d",demKyTuDacBiet(st));
	printf("\n6. So tu trong chuoi la: %d", demTu(st));
	xoaAllKyTuTrangDu(st);
	printf("\n7. Chuoi sau khi xoa khoang trang du thua: %s", st);
	proper(st);
	printf("\n8. Chuoi sau khi proper: %s",st);
}
