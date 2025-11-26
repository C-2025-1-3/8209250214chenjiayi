#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double fahrenheit, celsius;
    cout << "请输入华氏温度：";
    cin >> fahrenheit;
    celsius = 5.0 / 9 * (fahrenheit - 32);
    cout << fixed << setprecision(2) << "对应的摄氏温度为：" << celsius << endl;
    return 0;
}
