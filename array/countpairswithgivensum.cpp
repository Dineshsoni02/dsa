#include <iostream>
#include <unordered_map>

using namespace std;

// brute force
int countPairs1(int *arr, int n, int k)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                count++;
            }
        }
    }
    return count;
}
int countPairs(int *arr, int n, int k)
{
    int count = 0;
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int b = k - arr[i]; // checks the difference
        if (m[b])           // if b is present in map
        {
            count += m[b]; // update frequency of element in map and count
        }

        m[arr[i]]++; // updates frequency of all
    }
    return count;
}

int main()
{
    int arr[20], n, k;
    cout << "enter size:";
    cin >> n;
    cout << "enter elements in array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter sum key:";
    cin >> k;

    // cout << "result: " << countPairs1(arr, n, k);
    cout << "result: " << countPairs(arr, n, k);
    return 0;
}