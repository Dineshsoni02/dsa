#include <iostream>
#include<algorithm>
using namespace std;

void mergeTwoArr(int arr1[], int n, int arr2[], int m)
{
    // leetCode
    /*
      int k=0;
      for(int i=0;i<m;i++){
          nums1[k++]=nums1[i];
      }  
     for(int j=0;j<n;j++){
          nums1[k++]=nums2[j];
      }  
       sort(nums1.begin(),nums1.end());
    }
    */
    // two pointer method

    int left = n - 1, right = 0;
    while (left >= 0 && right < m)
    {
        if (arr1[left] >= arr2[right])
        {
            swap(arr1[left], arr2[right]);
            left--,right++;
        }else{
            break;
        }
    }   
    sort(arr1,arr1+n);
    sort(arr1,arr2+m);
    cout<<"Result";
    for (int i = 0; i < n; i++)
    {
       cout<<arr1[i]<<" ";
    }
    for (int j = 0; j<m; j++)
    {
       cout<<arr2[j]<<" ";
    }
}

int main()
{
    int arr1[4]={1,2,3,5}, n, arr2[5]={22,3,4,5,7}, m;
    // cout << "Enter size of array 1 & 2: ";
    // cin >> n >> m;
    // cout << "Enter elements in array1:";
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr1[i];
    // }
    // cout << "Enter elements in array2:";
    // for (int j = 0; j < m; j++)
    // {
    //     cin >> arr2[j];
    // }
    mergeTwoArr(arr1, 4, arr2, 5);
    return 0;
}