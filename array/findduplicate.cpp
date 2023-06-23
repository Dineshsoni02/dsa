#include <iostream>
using namespace std;

int findDuplicate(int arr[], int n)
{

    // brute force
    /*
    int ans = 0;
     for (int i = 0; i < n; i++)
     {
         for (int j = i + 1; i < n; i++)
         {
             if (arr[i] == arr[j])
             {
                 ans = arr[j];
             }
         }
     }
     return ans;
    */
    // optimised
    int slow = arr[0];
    int fast = arr[0];
    do
    {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);

    fast = arr[0];
    while (slow != fast)
    {
        slow = arr[slow];
        fast = arr[fast];
    }
    return slow;
}

int main()
{
    int arr[20], n;
    cout << "Enter size of array:";
    cin >> n;
    cout << "Enter elements in array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Duplicate value: " << findDuplicate(arr, n);
}
