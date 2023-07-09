#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> factorialNumber(int N)
{
    // code here
    vector<int> res;
    res.push_back(1); // store first as 1
    for (int m = 2; m <= N; m++)
    {               // initialise a multiplier=2 and loop to N
        int cr = 0; // carry
        for (int i = 0; i < res.size(); i++)
        {                              // loop to res.size()
            int val = res[i] * m + cr; // current val
            res[i] = val % 10;         // store ones index value
            cr = val / 10;             // carry all 10s,100s values to carry
        }
        while (cr != 0)
        {
            res.push_back(cr % 10); // push last carry value to res
            cr /= 10;
        }
    }
    reverse(res.begin(), res.end());
    return res;
}
// print vector
void print_vector(vector<int> &result)
{
    cout << "result:";
    for (auto i = result.begin(); i != result.end(); ++i)
    {
        cout << *i;
    }
}

int main()
{
    int n;
    cout << "enter number to find factorial:";
    cin >> n;
    vector<int> result = factorialNumber(n);
    cout << "result:";
    print_vector(result);
    return 0;
}

// void multiply(vector<int>& nums, int &size, int &multiplier) {
//         int carry = 0;
//         for(int i = 0; i<size; i++) {
//             int result = (multiplier*nums[i])+carry;
//             nums[i]   = result%10;
//             carry     = result/10;
//         }
//         while(carry) {
//             nums[size] = carry%10;
//             size++;
//             carry /= 10;
//         }
//     }

//     vector<int> factorial(int N){
//         vector<int> nums(10000, 0);
//         nums[0] = 1;
//         int size = 1;
//         int fact = N;

//         for(int multiplier = 2; multiplier<=fact; multiplier++)
//             multiply(nums, size, multiplier);

//         vector<int> result;
//         for(int i = size-1; i>=0 ; i--)
//             result.push_back(nums[i]);
//         return result;
//     }