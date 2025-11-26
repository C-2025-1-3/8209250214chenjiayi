#include<iostream>
using namespace std;
int main()
{
    int a, b;
    char op;
    cout << "请输入表达式（格式：a op b）：";
    cin >> a >> op >> b;
    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        if (b == 0)
        {
            cout << "除数不能为0！" << endl;
            return 1;
        }
        cout << (double)a / b << endl;
        break;
    case '%':
        if (b == 0)
        {
            cout << "除数不能为0！" << endl;
            return 1;
        }
        cout << a % b << endl;
        break;
    default:
        cout << "非法运算符！" << endl;
        break;
    }
    return 0;
}
