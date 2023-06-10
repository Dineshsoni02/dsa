#include <iostream>
using namespace std;

int kthSmallest(int arr[], int n, int k)
{

    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
    return arr[k - 1];
}

int main()
{
    int arr[10]={5,-5,8,88,66,4,-55}, k, n;
    // cout << "enter size of array:";
    // cin >> n;

    // cout << "enter elements in array:";
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    cout << "Enter kth smallest element to be returned: ";
    cin >> k;
    cout << "Result:" << kthSmallest(arr, 7, k);
    return 0;
}