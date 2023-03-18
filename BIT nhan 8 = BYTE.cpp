#include<stdio.h>
main(){
	int n;
	int b,i,t,y,e;
	for(b=1; b<=9; b++)
		for(i=0; i<=9; i++)
		    for(t=0; t<=9; t++)
		        for(y=0; y<=9; y++)
		            for(e=0; e<=9; e++){
		            	int bit = b*100 + i*10 + t;
		            	int byte = b*1000+y*100+t*10 + e;
		            	if(bit*8==byte);
		            	printf("\n%d%d%d * 8 = %d%d%d%d",b,i,t,b,y,t,e);
					}
}
