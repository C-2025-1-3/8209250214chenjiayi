#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double sqrtIter(double a)
{
    if (a < 0)
    {
        cout << "输入不能为负数！" << endl;
        return -1;
    }
    double xn = a, xn1;
    do
    {
        xn1 = (xn + a / xn) / 2;
        if (fabs(xn1 - xn) < 1e-5)
            break;
        xn = xn1;
    } while (true);
    return xn1;
}
int main()
{
    double a;
    cout << "请输入一个数：";
    cin >> a;
    double result = sqrtIter(a);
    if (result != -1)
        cout << fixed << setprecision(6) << "平方根为：" << result << endl;
    return 0;
}
