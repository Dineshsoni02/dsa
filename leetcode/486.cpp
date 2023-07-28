
//Recursion + Memo - II
//Approach-2 (Using diff of score between players)
class Solution {
public:
    int n;
    int t[23][23];
    
    //Player1 - Player2
    int maxDiff(vector<int>& nums, int l, int r) {
        
        if(l == r)
            return nums[l];
        
        if(t[l][r] != -1)
            return t[l][r];
        
        int take_left  = nums[l] - maxDiff(nums, l+1, r);
        int take_right = nums[r] - maxDiff(nums, l, r-1);
        
        return t[l][r] = max(take_left, take_right);
    }
    
    bool PredictTheWinner(vector<int>& nums) {
        n = nums.size();
        memset(t, -1, sizeof(t));
        return maxDiff(nums, 0, n-1) >= 0;
            
    }
};


class Solution {
public:
    int n;
    int t[23][23]; //1
    int solve(vector<int>& nums, int l, int r) {
        
        if(l > r)
            return 0;
        
        if(l == r)
            return nums[l];
        
        if(t[l][r] != -1)  //3
            return t[l][r];
        
        int take_left  = nums[l] + min(solve(nums, l+2, r), solve(nums, l+1, r-1));
        
        int take_right = nums[r] + min(solve(nums, l, r-2), solve(nums, l+1, r-1));
        
        
        return t[l][r] = max(take_left, take_right); //4
        
    }
    
    bool PredictTheWinner(vector<int>& nums) {
        
        memset(t, -1, sizeof(t)); //2
        
        n = nums.size();
        
        
        int total = accumulate(begin(nums), end(nums), 0);
        
        int player1 = solve(nums, 0, n-1);
        int player2 = total - player1;
        
        return player1 >= player2;
    }
};

// class Solution {
//     private:
//     int solve(int i,int j,vector<int>& nums){
//         //base cases
//         if(i>j) return 0;
//         if(i==j) return nums[i];
//         // recursive relation
//         int take_i  = nums[i] + min(solve(i+2,j,nums),solve(i+1,j-1,nums));
//         int take_j = nums[j] + min(solve(i+1,j-1,nums),solve(i,j-2,nums));
//         //process
//         return max(take_i,take_j);
//     }

// public:
//     bool PredictTheWinner(vector<int>& nums) {
//         int n = nums.size();
//          int total_sum = accumulate(begin(nums),end(nums),0);
//         int player1_score = solve(0,n-1,nums);
//         int player2_score  = total_sum - player1_score;
//         return player1_score <= player2_score;
//     }
// };