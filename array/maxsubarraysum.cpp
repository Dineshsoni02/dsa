// Kadane's Algorithm
#include <iostream>
#include <math.h>
#include <climits>
using namespace std;

int main()
{

    int a[5] = {1, 2, 3, -2, 5};
  /*
   int maxSum = INT_MIN, sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + a[i];
        if (maxSum < sum)
            maxSum = sum;
        if (sum < 0)
            sum = 0;
    }
    cout << "Max sum of subArray:" << maxSum;
    */ 

   //....
    int sum=a[0],maxSum=a[0];
    for (int i = 1; i < 5; i++)
    {
        sum=max(sum+a[i],a[i]);
        maxSum=max(sum,maxSum);
    }
    cout << "Max sum of subArray:" << maxSum;
    return 0;
}