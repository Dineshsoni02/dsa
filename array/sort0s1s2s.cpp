#include <iostream>
using namespace std;

int sort012(int arr[], int n)
{
    int zeros = 0, ones = 0, twos = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            zeros++;
        else if (arr[i] == 1)
            ones++;
        else
            twos++;
    }
    int k = 0;
    while (zeros > 0)
    {
        arr[k++] = 0;
        zeros--;
    }
    while (ones > 0)
    {
        arr[k++] = 1;
        ones--;
    }
    while (twos > 0)
    {
        arr[k++] = 2;
        twos--;
    }
    cout<<"Result:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout <<" "<< arr[i];
    }
}

int main()
{

    int a[10], n;
    cout << "enter size of array:";
    cin >> n;

    cout << "enter array elements in 0s, 1s,2s only:";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort012(a, n);
    return 0;
}