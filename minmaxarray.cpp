#include <iostream>
#include <climits>
using namespace std;

int minmaxArray(int arr[], int n)
{

    int mini = INT_MAX;
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        mini = min(mini, arr[i]);
        maxi = max(maxi, arr[i]);
    }
    cout<<"min: "<<mini<<" "<<"max: "<<maxi<<endl;
}

int main()
{
    int a[15], n;
    cout << "enter size :";
    cin >> n;
    cout << "enter elements :";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    minmaxArray(a, n);
    return 0;
}