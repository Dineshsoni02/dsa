#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int maxP = 0;
    int minSofar = prices[0];
    for (int i = 0; i < prices.size(); i++)
    {
        minSofar = min(minSofar, prices[i]);
        int profit = prices[i] - minSofar;
        maxP = max(maxP, profit);
    }

    return maxP;
}

int main()
{
    vector<int> prices;
    int n, a;
    cout << "enter size: ";
    cin >> n;
    cout << "enter values: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        prices.push_back(a);
    }
    cout << "max profit:" << maxProfit(prices);

    return 0;
}