#include <iostream>
using namespace std;
void sort_array(int *a, int s) {
    for (int i = 0; i < s - 1; i++)
        for (int j = 0; j < s - i - 1; j++)
            if (*(a + j) > *(a + j + 1)) {
                int t = *(a + j);
                *(a + j) = *(a + j + 1);
                *(a + j + 1) = t;
            }
}
int main() {
    int n;
    cout << "输入数组个数：";
    cin >> n;
    int *a = new int[n];
    cout << "输入数组元素：";
    for (int i = 0; i < n; i++) cin >> *(a + i);
    sort_array(a, n);
    cout << "排序后：";
    for (int i = 0; i < n; i++) cout << *(a + i) << " ";
    cout << endl;
    delete[] a;
    return 0;
}
