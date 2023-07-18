#include <iostream>
#include <map>
#include <vector>
using namespace std;

// O(2log2)
vector<int> majElement(vector<int> &nums)
{
    int n = nums.size();
        vector<int> ls;
        map<int,int> mp;
        int mini = (int)(n/3) + 1;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            if(mp[nums[i]]==mini){
                ls.push_back(nums[i]);
            }
        }
        return ls;
    }

    int main()
{
    vector<int> nums;
    int n;
    cout << "enter size:";
    cin >> n;
    cout << "enter elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << "result" << majElement(nums);
    return 0;
}