#include<stdio.h>
#include<string.h>
#include<ctype.h>
int demTu(char st[]){
	int dem=0;
	if(st[0]!=' ') dem=1;
	for(int i=1; i<strlen(st); i++)
		if(isalpha(st[i]) && st[i-1]==' ') dem++;
	return dem;
}
main(){
	FILE *fptr;
	fptr = fopen ("text_AA.txt", "r");
	if(fptr != NULL)
	{
		int dem=0;
		char st[80];
		while(feof(fptr)==0){
			if(fgets(st,80,fptr)>0){
				dem = dem + demTu(st);
				printf("%d : %s",demTu(st),st);
			}
		}
		printf("\nSo cac so tu file %d ",dem);
		fclose(fptr);
	}
	else
		printf("ERROR: Khong mo duoc tep");
}
