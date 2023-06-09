#include <iostream>
using namespace std;

int sortArray(int arr[], int n, int k)
{

    for (int i = 0; i < n; i++)
    {
        int temp = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = j;
            }
        }
        if (temp != i)
        {
            int t = arr[i];
            arr[i] = arr[temp];
            arr[temp] = t;
        }
    }
}

int kthSmallest(int arr[], int n, int k)
{   
    sortArray(arr,  n, k);

    return arr[k - 1];
}

int main()
{

    int arr[10], k, n;
    cout << "enter size of array:";
    cin >> n;

    cout << "enter elements in array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter kth smallest element to be returned: ";
    cin >> k;
 cout<<"Result:"<<kthSmallest(arr, n, k);
    return 0;
}