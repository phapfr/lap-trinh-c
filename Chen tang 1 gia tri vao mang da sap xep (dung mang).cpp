#include <stdio.h>
#include <cstdlib>
#include <ctime>
int nhapsoduong()
{
	int x;
	do
	{
		printf("nhap n>0: ");
		scanf("%d", &x);
	} while (x <= 0);
	return x;
}
void nhapmang(int x[], int n)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		x[i] = rand() % 100;
	}
}
void xuatmang(char nd[], int x[], int n)
{
	printf("%s", nd);
	for (int i = 0; i < n; i++)
	{
		printf(" %d ", x[i]);
	}
	printf("\b }");
}
void sort(int x[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (x[i] > x[j])
			{
				int t = x[i];
				x[i] = x[j];
				x[j] = t;
			}
}
void chen(int a[], int &n, int y, int k)
{
	for (int j = n - 1; j >= k; j--)
		a[j + 1] = a[j];
	a[k] = y;
	n++;
}
void chentang(int x[], int &n, int y)
{
	int k;
	for (k = 0; k < n; k++)
		if (x[k] >= y)
			break;
	chen(x, n, y, k);
}
main()
{
	int n;
	int a[100];
	n = nhapsoduong();
	nhapmang(a, n);
	xuatmang("cac so vua nhap : {", a, n);
	sort(a, n);
	xuatmang("\nMang khong giam: ", a, n);
	/*int x;
	printf("\n nhap gia tri can chen: ");
	scanf("%d", &x);
	chentang(a, n, x);
	xuatmang("\n Mang sau chen: ", a, n);*/
}
