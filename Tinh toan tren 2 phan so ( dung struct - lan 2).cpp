#include <stdio.h>
#include <math.h>
#include <stdlib.h>
struct PS
{
	int tu, mau;
};
PS nhap1PS(char nd[])
{
	PS x;
	printf("%s", nd);
	printf("\n\tTu:");
	scanf("%d", &x.tu);
	do
	{
		printf("\tMau>0:");
		scanf("%d", &x.mau);
	} while (x.mau <= 0);
	return x;
}
PS cong(PS a, PS b)
{
	PS c;
	c.tu = a.tu * b.mau + b.tu * a.mau;
	c.mau = a.mau * b.mau;
	return c;
}
PS tru(PS a, PS b)
{
	PS c;
	c.tu = a.tu * b.mau - b.tu * a.mau;
	c.mau = a.mau * b.mau;
	return c;
}
PS nhan(PS a, PS b)
{
	PS c;
	c.tu = a.tu * b.tu;
	c.mau = a.mau * b.mau;
	return c;
}
PS chia(PS a, PS b)
{
	PS c;
	c.tu = a.tu * b.mau;
	c.mau = a.mau * b.tu;
	return c;
}
int UCLN(int x, int y)
{
	while (x != y)
	{
		if (x > y)
			x = x - y;
		else
			y = y - x;
	}
	return x;
}
main()
{
	PS a, b, c;
	char pt;
	a = nhap1PS("Nhap phan so 1:");
	b = nhap1PS("Nhap phan so 2:");
	printf("Nhap phep tinh (+,-,*,/):");
	fflush(stdin);
	scanf("%c", &pt);
	switch (pt)
	{
	case '+':
		c = cong(a, b);
		break;
	case '-':
		c = tru(a, b);
		break;
	case '*':
		c = nhan(a, b);
		break;
	case '/':
		if (b.tu == 0)
		{
			printf("Khong chia 0");
			exit(0);
		}
		else
			c = chia(a, b);
		break;
	default:
		printf("Khong tinh");
		exit(0);
	}
	if (c.tu * c.mau != 0)
	{
		int t = UCLN(abs(c.tu), abs(c.mau));
		c.tu = c.tu / t;
		c.mau = c.mau / t;
	}
	printf("%d/%d %c %d/%d = %d/%d", a.tu, a.mau, pt, b.tu, b.mau, c.tu, c.mau);
}
