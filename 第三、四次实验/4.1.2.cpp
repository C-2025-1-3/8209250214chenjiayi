#include <iostream>
#include <<iomanip>
using namespace std;
void bubble_sort(double l[], int s) {
    bool c;
    do {
        c = false;
        for (int j = 0; j < s - 1; j++)
            if (l[j] > l[j + 1]) {
                double t = l[j];
                l[j] = l[j + 1];
                l[j + 1] = t;
                c = true;
            }
    } while (c);
}
int main() {
    double n[10];
    cout << "输入10个双精度数字：";
    for (int i = 0; i < 10; i++) cin >> n[i];
    bubble_sort(n, 10);
    cout << "排序后：";
    for (int i = 0; i < 10; i++) cout << setw(6) << n[i];
    cout << endl;
    return 0;
}
