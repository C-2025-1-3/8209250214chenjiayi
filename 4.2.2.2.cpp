#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int parseHex(const char *h) {
    int r = 0;
    const char *p = h;
    while (*p) {
        char c = toupper(*p);
        r *= 16;
        r += (c >= '0' && c <= '9') ? c - '0' : c - 'A' + 10;
        p++;
    }
    return r;
}
int main() {
    char h[100];
    cout << "输入16进制字符串：";
    cin >> h;
    cout << "10进制结果：" << parseHex(h) << endl;
    return 0;
}
