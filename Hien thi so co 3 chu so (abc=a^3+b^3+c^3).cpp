#include<stdio.h>
#include<math.h>
main(){
	int s1,s2;
	printf("Hien thi tat ca cac so co 3 chu so thoa:\nabc = a^3 + b^3 + c^3\n");
	for(int a=1;a<10;a++){
		for(int b=0;b<10;b++){
			for(int c=0;c<10;c++){
				s1=a*100+b*10+c;
				s2=(int)pow(a,3)+pow(b,3)+pow(c,3);
				if(s1==s2) printf("%d\t",s1);
			}
		}	
	}
}
