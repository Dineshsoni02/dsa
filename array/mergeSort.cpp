#include <iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;
    // create 2 array to sort both side
    int len1 = mid - s + 1;
    int len2 = e - mid;
    int *first = new int[len1];
    int *second = new int[len2];
    // copy element in these
    int mainArrayIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i++] = arr[mainArrayIndex+i];
    }
    for (int j = 0; j < len2; j++)
    {
        second[j++] = arr[mainArrayIndex+j];
    }

    // merging and sorting
    int index1 = 0, index2 = 0;
    mainArrayIndex = s;
    while (index1 <= len1 && index2 <= len2)
    {
        if (first[index1] <= second[index2])
        {

            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = second[index2++];
        }
    }
    while (index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }
}

void mergeSort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;

    // left
    mergeSort(arr, s, mid);
    // right
    mergeSort(arr, mid + 1, e);
    // merge both
    merge(arr, s, e);
}
int main()
{
    int arr[5]={2,3,4,1,5}, n=5;
    // cout << "enter size:";
    // cin >> n;
    // cout << "enter elements:";
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    cout << "Before merge Sort:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    mergeSort(arr, 0, n - 1);
    cout << "After merge Sort:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}