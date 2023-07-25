
int peakIndexInMountainArray(vector<int> &arr)   //[0,1,2,10,5,3]
{
    int n = arr.size();  //6
    int i=0;               // 0 1 2 3 
    while(i<n && arr[i]<arr[i+1]){          // 0<6  arr[0]<arr[1], a[1]<a[2] a[2]<a[3] a[3]<a[4]
        i++;                                //1 2 3
        }
    return i;                       //3
}

int peakIndexInMountainArray(vector<int> &arr) //[0,1,2,10,5,3]
{
    int l = 0, r = n - 1;                    //l=0 3 r=5 4
    while (l < r)                             //0<5 3<5 3<4 
    {
        int mid = l + (r - l) / 2;         // 2  4 3 
        if (arr[mid] < arr[mid + 1])      //arr[2]<arr[3]  2<10    arr[4] < arr[5]  5<3  arr[3]<arr[4] 10<4 x
        {
            l = mid + 1;                    //l = 3
        }
        else
        {
            r = mid;                     //r=4 3 
        }
    }
    return l;
}