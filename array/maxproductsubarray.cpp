#include <iostream>
#include<climits>
using namespace std;

int maxProSubArr(int *arr, int n)
{
    int pre = 1, suff = 1; // prefix = 1 ,suffix =1
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (pre == 0)
            pre = 1; // if pre becomes 0 assign pre=1 , same with suff
        if (suff == 0)
            suff = 1;
        pre *= arr[i];                 // multiply pre from start elements
        suff *= arr[n - i - 1];        // suff from last
        ans = max(ans, max(pre, suff)); // return max of both and ans
    }
    return ans;
}

int main()
{
    int arr[20], n;
    cout << "enter size:";
    cin >> n;
    cout << "enter element in array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "result:" << maxProSubArr(arr, n);
    return 0;
}