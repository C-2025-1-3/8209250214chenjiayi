#include <iostream>
#include <iomanip>
using namespace std;
bool is_prime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i * i <= num; i += 2)
        if (num % i == 0) return false;
    return true;
}
int main() {
    int c = 0, num = 2;
    cout << "前200个素数：" << endl;
    while (c < 200) {
        if (is_prime(num)) {
            cout << setw(5) << num;
            c++;
            if (c % 10 == 0) cout << endl;
        }
        num++;
    }
    return 0;
}
