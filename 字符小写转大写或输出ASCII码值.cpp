#include<iostream>
using namespace std;

int main()
{
    char c;
    cout << "请输入一个字符：";
    cin >> c;
    if (c >= 'a' && c <= 'z') {
        cout << (char)(c - 32) << endl;
    } else {
        cout << (int)(c + 1) << endl;
    }
    return 0;
}
