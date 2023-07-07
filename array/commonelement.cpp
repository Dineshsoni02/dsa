#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> commonElem(int *a1, int *a2, int *a3, int n1, int n2, int n3)
{
    unordered_map<int, int> m1, m2, m3;
    for (int i = 0; i < n1; i++)
        m1[a1[i]]++;
    for (int j = 0; j < n2; j++)
        m2[a2[j]]++;
    for (int k = 0; k < n3; k++)
        m3[a3[k]]++;
    vector<int> v;
    for (int l = 0; l < n1; l++)
    {
        if (m1[a1[l]] && m2[a1[l]] && m3[a1[l]])
        {
            v.push_back(a1[l]);
            m1[a1[l]] = 0;
        }
    }
    return v;
}

int main()
{
    int n1 = 6, n3 = 8, n2 = 5;
    int a1[20] = {1, 5, 10, 20, 40, 80}, a2[20] = {6, 7, 20, 80, 100}, a3[20] = {3, 4, 15, 20, 30, 70, 80, 120};
    cout << commonElem(a1, a2, a3, n1, n2, n3);

    return 0;
}