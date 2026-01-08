#include <iostream>
using namespace std;
int main() {
    bool l[100] = {false};
    for (int s = 1; s <= 100; s++)
        for (int k = s - 1; k < 100; k += s)
            l[k] = !l[k];
    cout << "开着的柜子：";
    for (int i = 0; i < 100; i++)
        if (l[i]) cout << (i + 1) << " ";
    cout << endl;
    return 0;
}
