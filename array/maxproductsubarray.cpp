#include <iostream>
#include <climits>
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
        pre *= arr[i];                  // multiply pre from start elements
        suff *= arr[n - i - 1];         // suff from last
        ans = max(ans, max(pre, suff)); // return max of both and ans
    }
    return ans;
}

int maxProSubArr1(int *arr, int n)
{
    // using kadane's
    int minV = arr[0], maxV = arr[0];
    int ans = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < 0)
        {
            maxV = maxV + minV - (minV = maxV);
        }
        maxV = max(arr[i], arr[i] * maxV);
        minV = min(arr[i], arr[i] * minV);
        ans = max(maxV, ans);
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