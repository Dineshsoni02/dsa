#include <iostream>
using namespace std;

int rotateArray(int arr[], int n)
{

    int temp = arr[n - 1];
    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}

int main()
{
    int a[10], n;
    cout << "Enter size of array :";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    rotateArray(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i]<<" ";
    }
    return 0;
}