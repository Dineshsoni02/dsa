#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int s, int e)
{
    int mid = s + (e - s) / 2;
    // create 2 array to sort both side
    int len1 = mid - s + 1;
    int len2 = e - mid;
   vector<int> L(len1),R(len2);
    // copy element in these
    cout<<"arr";
for (int i = 0; i < arr.size(); i++)
{
    cout<<" "<<arr[i];
}

  
    for (int i = 0; i < len1; i++)
    {
        L[i] = arr[s+i];
    }
    for (int j = 0; j < len2; j++)
    {
        R[j] = arr[mid+1+j];
    }

    // merging and sorting
    int i = 0, j = 0;
    int k = s;
    while (i <= len1 && j <= len2)
    {
        if (L[i] <= R[i])
        {

            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k++] = R[j];
            j++;
        }
        k++;
    }
    while (i < len1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < len2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int> &arr, int s, int e)
{
    if (s < e)
    {
        int mid = s + (e - s) / 2;
        // left
        mergeSort(arr, s, mid);
        // right
        mergeSort(arr, mid + 1, e);
        // merge both
        merge(arr, s, e);
    }
}
int main()
{
    vector<int> arr = {2, 3, 4, 1, 5};
    int n = arr.size();
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