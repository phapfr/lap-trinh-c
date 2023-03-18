#include <iostream>
#include <stdio.h>
using namespace std;
int s = 0;
int nhan(int a, int b)
{
    if ((a * b) == 0)
        return 0;
    else
        return a+nhan(a, (b - 1));
}
float mu(int a,int b)
{
    if (b == 0) return 1;
return nhan(a,mu(a,b-1));
}
main()
{
    int a, b;
    do
    {
        cout << " Nhap a>0: ";  cin >> a;
        cout << " Nhap b>0: ";  cin >> b;
    } while (a < 0 || b < 0);
    cout << "\t 3. Tich= ";
    cout << nhan(a, b) << endl;
    if(a>=b)
    {
    cout << "\t 4. Luy thua= ";
    cout << mu(a,b);
    }
    if(a<b)
    {
    cout << "\t 4. Luy thua= ";
    cout << mu(a,b);
    }
}
