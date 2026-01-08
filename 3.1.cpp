#include <iostream>
using namespace std;
int gcd(int m, int n) {
    while (n != 0) {
        int t = n;
        n = m % n;
        m = t;
    }
    return m;
}
void gcd_lcm(int m, int n, int &g, int &l) {
    g = gcd(m, n);
    l = (m * n) / g;
}
int main() {
    int m, n, g, l;
    cout << "输入两个自然数m和n：";
    cin >> m >> n;
    cout << "最大公约数：" << gcd(m, n) << endl;
    gcd_lcm(m, n, g, l);
    cout << "最大公约数：" << g << "，最小公倍数：" << l << endl;
    return 0;
}
