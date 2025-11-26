#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int count = 2;
    double totalCost = 0, price = 0.8;
    int day = 0;
    while (count <= 100)
    {
        totalCost += count * price;
        day++;
        count *= 2;
    }
    double avgCost = totalCost / day;
    cout << fixed << setprecision(2) << "平均每天花费：" << avgCost << "元" << endl;
    return 0;
}
