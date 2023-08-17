
class Solution {
public:
int solve(int i,int buy,vector<int>& prices,int limit, vector<vector<vector<int>>>& dp){
    if(i==prices.size()) return 0;
    if(limit==0) return 0;
    if(dp[i][buy][limit]!=-1){
        return dp[i][buy][limit];
    }
    int profit=0;
    if(buy){
        int buyKro= -prices[i]+solve(i+1,0,prices,limit,dp);
        int skipKro= 0 +solve(i+1,1,prices,limit,dp);
        profit = max(buyKro,skipKro);
    }else{
        int sellKro=+prices[i]+solve(i+1,1,prices,limit-1,dp); 
        // limit-1 in sell because 1 transcation = buy and sold
        int skipKro=0+solve(i+1,0,prices,limit,dp);
        profit = max(sellKro,skipKro);
    }
    return dp[i][buy][limit]=profit;
}
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
         // RECURSION + MEMOIZATION
        //3d dp->i buy limit
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(3,-1)));
        return solve(0,1,prices,2,dp);
    }
};

