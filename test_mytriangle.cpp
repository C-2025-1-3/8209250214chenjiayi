#include <iostream>
#include <iomanip>
#include "mytriangle.h"
using namespace std;
int main() {
    double a, b, c;
    cout << "输入三角形三边长：";
    cin >> a >> b >> c;
    if (is_valid(a, b, c)) {
        cout << fixed << setprecision(2);
        cout << "三角形面积：" << area(a, b, c) << endl;
    } else {
        cout << "输入不合法，无法构成三角形！" << endl;
    }
    return 0;
}
