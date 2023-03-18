#include<stdio.h>
main(){
	FILE *fptr;
	fptr = fopen ("text_AA.txt" , "r");
	if(fptr != NULL)
	{
		int demSo=0;
		char  c;
		while(feof(fptr)==0)
		{
			c = getc(fptr);
			printf("%c",c);
			if(c>='0' && c<='9') demSo++;
		}
		printf("\nSo cac so trong file: %d",demSo);
		fclose(fptr);
	}
	else
		printf("ERROR: Khong mo duoc tep");
}
