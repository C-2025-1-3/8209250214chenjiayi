#include <iostream>
#include <cstring>
using namespace std;
int indexOf(const char s1[], const char s2[]) {
    int l1 = strlen(s1), l2 = strlen(s2);
    if (l1 > l2) return -1;
    for (int i = 0; i <= l2 - l1; i++) {
        bool m = true;
        for (int j = 0; j < l1; j++)
            if (s2[i + j] != s1[j]) {
                m = false;
                break;
            }
        if (m) return i;
    }
    return -1;
}
int main() {
    char s1[100], s2[100];
    cout << "Enter first string: ";
    cin >> s1;
    cin.ignore();
    cout << "Enter second string: ";
    cin.getline(s2, 100);
    cout << "indexOf(\"" << s1 << "\",\"" << s2 << "\") is " << indexOf(s1, s2) << endl;
    return 0;
}
