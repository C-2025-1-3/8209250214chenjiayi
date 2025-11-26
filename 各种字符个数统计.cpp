#include<iostream>
using namespace std;
int main()
{
    char c;
    int letter = 0, space = 0, digit = 0, other = 0;
    cout << "请输入一行字符：";
    while ((c = getchar()) != '\n')
    {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            letter++;
        else if (c == ' ')
            space++;
        else if (c >= '0' && c <= '9')
            digit++;
        else
            other++;
    }
    cout << "英文字母：" << letter << "个" << endl;
    cout << "空格：" << space << "个" << endl;
    cout << "数字：" << digit << "个" << endl;
    cout << "其他字符：" << other << "个" << endl;
    return 0;
}
