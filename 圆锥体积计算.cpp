#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    const double PI = 3.1415926;
    double radius, height, volume;
    cout << "请输入圆锥底面半径和高：";
    cin >> radius >> height;
    volume = (1.0 / 3) * PI * radius * radius * height;
    cout << fixed << setprecision(2) << "圆锥体积为：" << volume << endl;
    return 0;
}
