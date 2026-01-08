#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
void count(const char s[], int c[]) {
    for (int i = 0; i < 26; i++) c[i] = 0;
    int l = strlen(s);
    for (int i = 0; i < l; i++)
        if (isalpha(s[i]))
            c[tolower(s[i]) - 'a']++;
}
int main() {
    char s[100];
    int c[26];
    cout << "Enter a string: ";
    cin.getline(s, 100);
    count(s, c);
    for (int i = 0; i < 26; i++)
        if (c[i] > 0)
            cout << (char)('a' + i) << ": " << c[i] << " times" << endl;
    return 0;
}
