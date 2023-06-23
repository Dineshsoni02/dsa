#include <iostream>
using namespace std;

int maxAltitude(int arr[], int n)
{
    int maxAlt = 0, currAlt = 0;
    for (int i = 0; i < n; i++)
    {
        currAlt += arr[i];
        maxAlt = max(currAlt, maxAlt);
    }

    return maxAlt;
}

int main()
{
    int arr[10], n;
    cout << "enter size of array:";
    cin >> n;
    cout << "enter elements in array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Max altitude attained: " << maxAltitude(arr, n);

    return 0;
}