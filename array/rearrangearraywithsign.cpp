#include <iostream>
using namespace std;

void rearrangeArray(int *arr, int n)
{
    int posIndex = 0, negIndex = 1; // index used to store at alternate positions +ve at even -ve at odd
    int ans[n];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0) //arr[i] <0 => -ve stored in -veIndex
        {
            ans[negIndex] = arr[i];
            negIndex += 2;//increase by 2 to achieve odd position
        }
        else
        {
            ans[posIndex] = arr[i];
            posIndex += 2;
        }
    }

    cout << "Rearranged array:";
    for (int p = 0; p < n; p++)
    {
        cout << ans[p]<<" ";
    }
}

int main()
{
    int arr[20], n;
    cout << "enter size:";
    cin >> n;
    cout << "enter values in array";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    rearrangeArray(arr, n);
    return 0;
}