#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;

// better approach O(n^2)
int longConSeq(int *arr, int n)
{
    if (n == 0)
        return 0;
    sort(arr, arr + n);
    int lastSmall = -55884949;
    int cnt = 0;
    int longest = 1;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        if (arr[i] - 1 == lastSmall)
        {
            cnt += 1;
            lastSmall = arr[i];
        }
        else if (lastSmall != arr[i])
        {
            cnt = 1;
            lastSmall = arr[i];
        }
        longest = max(longest, cnt);
    }
    return longest;
}
// optimal using unordered_set
int longConSeqOP(int *arr, int n)
{
    if (n == 0)
        return 0;
    unordered_set<int> st;
    int cnt = 0;
    int longest = 1;
    for (int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
    }

    for (auto it : st)
    {
        if (st.find(it - 1) == st.end())
        {
            cnt = 1;
            int x = it;
            while (st.find(x + 1) != st.end())
            {
                cnt += 1;
                x += 1;
            }

            longest = max(longest, cnt);
        }
    }
    return longest;
}

int main()
{
    int arr[20], n;
    cout << "enter size of arr:";
    cin >> n;
    cout << "enter elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "longest consecutive sequence number is :" << longConSeq(arr, n)<<endl;
    cout << "(optimal) longest consecutive sequence number is :" << longConSeqOP(arr, n);
    return 0;
}