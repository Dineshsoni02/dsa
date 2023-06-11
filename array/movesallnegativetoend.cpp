#include <iostream>
using namespace std;

int moveAllNegativeToEnd(int arr[], int n)
{
    int temp[n], k = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0 || arr[i] == 0)
        {
            temp[k++] = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            temp[k++] = arr[i];
        }
        arr[i] = temp[i];

        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[10], n;
    cout << "Enter size of array : ";
    cin >> n;
    cout << "enter elements in array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    moveAllNegativeToEnd(arr, n);

    return 0;
}


//leet code 283-> Move 0s
/*class Solution {
public:
    void moveZeroes(vector<int>& nums) {    
        int l=nums.size();
        int temp[l], k=0;
       
        for(int i =0;i<l;i++){
            if(nums[i]>0||nums[i]<0) {
                temp[k++]=nums[i]; 
            }
            
        }
        
        for(int i=0;i<l;i++){
            if(nums[i]==0) {
                temp[k++]=nums[i];
            }             
            nums[i]=temp[i];
        }
    }
}; */