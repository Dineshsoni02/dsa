//brute force
class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        stack<long long > st;
        long long maxi=0;
        for(int i=nums.size()-1;i>=0;i--){
            if(st.size()==0) st.push(nums[i]);
            else if(st.top()<nums[i]) st.push(nums[i]);
            else{
                long long tp=st.top();
                tp+=nums[i];
                st.pop();
                st.push(tp);
            }
            maxi=max(maxi,st.top());
        }
        return maxi;
    }
};
//O(n) O(n)

//optimised
class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        int n = nums.size();
        long ans = nums[n-1], nextElem = nums[n-1];   // ans = 3 nextElem =3 9 16 19 21
        for(int i=n-2;i>=0;i--){        //i = 3 2 1 0
            if(nums[i]<=nextElem){      // num[3] = 9 <=3 false , 7<=9 true 3<=16 2<=19
                nextElem += nums[i];  // 9+7=16  16+3=19  19+2 = 21
            }else{
                nextElem  = nums[i]; // nextElem = 9
            }
            ans = max(ans,nextElem);  //3 9 16 19 21
        }
    return ans; //21
    }
};
//O(n)  
//O(1)
