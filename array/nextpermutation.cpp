#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void nextPermutation(vector<int> &val)
{

    next_permutation(val.begin(), val.end());
}

int main()
{
    vector<int> val;
    int a;
    cout<<"enter values: ";
    for (int i = 0; i < 3; i++)
    {
        cin >> a;
        val.push_back(a);
    }
    nextPermutation(val);
    cout << "ans: ";
    for (auto ans : val)
    {
        cout << ans << " ";
    }
    return 0;
}