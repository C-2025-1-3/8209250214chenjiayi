#include <iostream>
using namespace std;
int main() {
    int n[10], d[10], c = 0;
    cout << "Enter ten numbers: ";
    for (int i = 0; i < 10; i++) cin >> n[i];
    for (int i = 0; i < 10; i++) {
        bool f = true;
        for (int j = 0; j < c; j++)
            if (n[i] == d[j]) {
                f = false;
                break;
            }
        if (f) d[c++] = n[i];
    }
    cout << "The distinct numbers are: ";
    for (int i = 0; i < c; i++) cout << d[i] << " ";
    cout << endl;
    return 0;
}
