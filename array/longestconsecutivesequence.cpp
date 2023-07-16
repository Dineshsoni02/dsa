#include <iostream>
#include <algorithm>
using namespace std;

//better approach
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
    cout << "longest consecutive sequence number is :" << longConSeq(arr, n);
    return 0;
}