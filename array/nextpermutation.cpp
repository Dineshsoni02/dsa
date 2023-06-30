#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void nextPermutation(vector<int> &nums)
{
    // using stl 😁
    //  next_permutation(nums.begin(), nums.end());
    int ind = -1;
    int n = nums.size();
    for (int i = n - 2; i > 0; i--)
    {
        if (nums[i] < nums[i + 1])
        {
            ind = i;
            break;
        }
    }
    if (ind == -1)
    {
        reverse(nums.begin(), nums.end());
    }
    else
    {
        for (int j = n - 1; j > ind; j--)
        {
            if (nums[j] > nums[ind])
            {
                swap(nums[j], nums[ind]);
                break;
            }
        }
        reverse(nums.begin() + ind + 1, nums.end());
    }
}

int main()
{
    vector<int> nums;
    int a;
    cout << "enter values: ";
    for (int i = 0; i < 3; i++)
    {
        cin >> a;
        nums.push_back(a);
    }
    nextPermutation(nums);
    cout << "ans: ";
    for (auto ans : nums)
    {
        cout << ans << " ";
    }
    return 0;
}