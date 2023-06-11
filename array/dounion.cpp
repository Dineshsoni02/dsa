#include <iostream>
#include <set>
using namespace std;

int doUnion(int a[], int n, int b[], int m)
{
    set<int> s;

    for (int i = 0; i < n; i++)
    {
        s.insert(a[i]);
    }
    for (int j = 0; j < m; j++)
    {
        s.insert(b[j]);
    }

    cout << "Ans: " << s.size();
}

int main()
{
    int a[10], b[10], n, m;
    cout << "Enter size of of 1st and 2nd array :";
    cin >> n >> m;

    for (int i = 0, j = 0; i < n, j < m; i++, j++)
    {
        cin >> a[i] >> b[j];
    }

    doUnion(a, n, b, m);
    return 0;
}