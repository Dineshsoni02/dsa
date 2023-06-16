#include <iostream>
#include <algorithm>
using namespace std;

int minimizeHeight(int arr[], int n, int k)
{
    sort(arr, arr + n);
    int ans = arr[n - 1] - arr[0];
    int minr = arr[0] + k;
    int maxr = arr[n - 1] - k;

    for (int i = 0; i < n; i++)
    {
        int mx = max(maxr, arr[i] + k);
        int mn = min(minr, arr[i + 1] - k);
        if (mn < 0)
            continue;
        ans = min(mx - mn, ans);
    }
    cout << "Ans:" << ans;
}

int main()
{

    int arr[10], n, k;
    cout << "enter size < 10:";
    cin >> n;
    cout << "enter K:";
    cin >> k;
    cout << "enter valueE:";
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    minimizeHeight(arr, n, k);
    return 0;
}