#include <iostream>
using namespace std;
void merge(const int l1[], int s1, const int l2[], int s2, int l3[]) {
    int i = 0, j = 0, k = 0;
    while (i < s1 && j < s2)
        l3[k++] = l1[i] < l2[j] ? l1[i++] : l2[j++];
    while (i < s1) l3[k++] = l1[i++];
    while (j < s2) l3[k++] = l2[j++];
}
int main() {
    int s1, s2;
    cout << "Enter list1: ";
    cin >> s1;
    int l1[s1];
    for (int i = 0; i < s1; i++) cin >> l1[i];
    cout << "Enter list2: ";
    cin >> s2;
    int l2[s2];
    for (int i = 0; i < s2; i++) cin >> l2[i];
    int l3[s1 + s2];
    merge(l1, s1, l2, s2, l3);
    cout << "The merged list is ";
    for (int i = 0; i < s1 + s2; i++) cout << l3[i] << " ";
    cout << endl;
    return 0;
}
