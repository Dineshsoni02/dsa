#include <iostream>
using namespace std;

int countInversion(int arr[], int n)
{

    /*
        arr = {5,4,2,3,1}
        count inversion  = i<j but arr[i]>arr[j]
        {5,4},{5,2},{5,3},{5,1},{4,2},{4,3},{4,1},{2,1},{3,1} = 9
    */

    // brute force
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; i < n; j++)
        {
            if (arr[i] > arr[j])
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int arr[20], n;
    cout << "enter size of array:";
    cin >> n;
    cout << "enter element in array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "result : " << countInversion(arr, n);
    return 0;
}