#include <iostream>
#include <cstring>
using namespace std;
int indexof(const char *s1, const char *s2) {
    int l1 = strlen(s1), l2 = strlen(s2);
    if (l1 > l2) return -1;
    for (int i = 0; i <= l2 - l1; i++) {
        const char *p1 = s1, *p2 = s2 + i;
        bool m = true;
        while (*p1 && *p2) {
            if (*p1 != *p2) {
                m = false;
                break;
            }
            p1++;
            p2++;
        }
        if (m) return i;
    }
    return -1;
}
int main() {
    char s1[100], s2[100];
    cout << "输入s1: ";
    cin >> s1;
    cin.ignore();
    cout << "输入s2: ";
    cin.getline(s2, 100);
    cout << "子串下标：" << indexof(s1, s2) << endl;
    return 0;
}
