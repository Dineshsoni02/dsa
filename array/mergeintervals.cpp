#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    vector<vector<int>> res;
    // sort the intervals
    sort(intervals.begin(), intervals.end());
    for (int i = 0; i < intervals.size(); i++)
    {
        // check if res is empty or
        // second [1] element of last(back) < first [0] positioned elem of current interval
        if (res.empty() || res.back()[1] < intervals[i][0])
        {
            res.push_back(intervals[i]); // push_back the current interval to the result
        }
        else
        {
            // if intervals[i][0] lies between res limits i.e less than res.back()[1]
            // assign max value between res 2nd limit to currents 2nd limit
            res.back()[1] = max(res.back()[1], intervals[i][1]);
        }
    }
    //printing
    cout << "ans:";
    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
        {
            cout<<res[i][j]<<" ";
        }
    }
}

int main()
{
    vector<vector<int>> intervals{
        {1, 3}, {2, 6}, {8, 10}, {15, 18}

    };
    merge(intervals);

    return 0;
}