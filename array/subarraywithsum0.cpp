#include <iostream>
#include <unordered_map>
using namespace std;

bool subArrayExists(int *arr, int n)
{
    int s = 0, f = 0;
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        s += arr[i]; // sum elements
        if (s == 0 || arr[i] == 0 || m[s]) // check if sum present in map or not || sum==0|| arr[i]==0
        {
            f = 1; //set flag 1
            break;
        }
        else
        {
            m[s] = 1; //else hashmap sum value in map 
        }
    }
}

int main()
{
    int arr[20], n;
    cout << "enter size: ";
    cin >> n;
    cout << "enter values: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "is present? : " << subArrayExists(arr, n);
    return 0;
}