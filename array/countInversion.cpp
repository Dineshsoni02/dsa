#include <iostream>
#include<vector>
using namespace std;

int countInversion1(int arr[], int n)
{

    /*
        arr = {5,4,2,3,1}
        count inversion  = i<j but arr[i]>arr[j]
        {5,4},{5,2},{5,3},{5,1},{4,2},{4,3},{4,1},{2,1},{3,1} = 9
    */

    // brute force tl = O(n^2)
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
long long merge(vector<int>& arr, vector<int>& temp, int left, int mid, int right) {
    int i = left;
    int j = mid;
    int k = left;
    long long inversions = 0;

    while (i <= mid - 1 && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];
            inversions += (mid - i);
        }
    }

    while (i <= mid - 1) {
        temp[k++] = arr[i++];
    }

    while (j <= right) {
        temp[k++] = arr[j++];
    }

    for (i = left; i <= right; i++) {
        arr[i] = temp[i];
    }

    return inversions;
}

long long mergeSort(vector<int>& arr, vector<int>& temp, int left, int right) {
    long long inversions = 0;
    if (left < right) {
        int mid = (left + right) / 2;
        inversions += mergeSort(arr, temp, left, mid);
        inversions += mergeSort(arr, temp, mid + 1, right);
        inversions += merge(arr, temp, left, mid + 1, right);
    }
    return inversions;
}

long long countInversions(vector<int>& arr) {
    int n = arr.size();
    vector<int> temp(n);
    return mergeSort(arr, temp, 0, n - 1);
}

int main() {
    vector<int> arr = { 1, 20, 6, 4, 5 };
    long long inversions = countInversions(arr);
    cout << "Number of inversions: " << inversions << endl;

    return 0;
}


