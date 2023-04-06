//Bai 2: Viet ham de quy tinh tong bieu thuc sau: S(x,n) = x + x^2/2! + x^3/3! +...+x^n/n!
#include <iostream>
#include <math.h>
using namespace std;

int giaithua(int n)
{
    if (n == 1)
        return 1;
    else
        return n * giaithua(n - 1);
}
double S(int x, int n)
{
    if (n == 1)
        return x;
    else
        return pow(x, n) / giaithua(n) + S(x, n - 1);
}
int main()
{
    int x, n;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Tong S(x,n) = " << S(x, n);
}
