#include <iostream>

using namespace std;

int minJumps(int arr[], int n)
{
    if (n <= 1)
        return 0;
    if (arr[0] == 0)
        return -1;

    int maxReach = arr[0];
    int steps = arr[0];
    int jumps = 1;

    for (int i = 1; i < n; i++)
    {
        if (i == n - 1)
            return jumps;
        maxReach = max(maxReach, i + arr[i]);
        steps--;

        if (steps == 0)
        {
            jumps++;
            if (i >= maxReach)
                return -1;
            steps = maxReach - i;
        }
    }
    return -1;
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
    cout << "Minimum jumps to reach end: " << minJumps(arr, n);
}

/*
n=11
1 3 5 8 9 2 6 7 6 8 9
maxReach=a[0]=9,11
steps=a[0]=7,6,8,7,6,5,6
jumps=2

for(int i=1;i<n;i++)

if(i==n-1) return jumps;
maxReach=max(maxReach,i+a[i])
steps--;
if(steps==0){

 jumps++;
if(i>=maxreach) return -1;
steps = maxREach-i;
 }
*/
