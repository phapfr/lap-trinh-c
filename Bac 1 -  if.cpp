#include <stdio.h>
#include <math.h>
main()
{
	float a, b, x;
	printf("Giai Ax+B=0");
	printf("\nNhap A:");
	scanf("%f", &a);
	printf("Nhap B:");
	scanf("%f", &b);
	printf("%.2fx %c%.2f = 0\n", a, ((b >= 0) ? '+' : ' '), b);
	if (a == 0)
	{
		if (b == 0)
			printf("vo so no");
		else
			printf("vo no");
	}
	else
	{
		printf("x = %.2f", -b / a);
	}
}
