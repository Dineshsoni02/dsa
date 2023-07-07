class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int n=answerKey.size();
        int start=0,end=0;
        int t=0,f=0; //counters for T & F
        int ans=0;
    while(end<n){
        t+=(answerKey[end]=='T'); // check and update T & F counters
        f+=(answerKey[end]=='F');

    //check if both counters exceeds k, move start pointer and shrink window
        while(t>k && f>k){
            answerKey[start]=='T'?t--:f--;
            start++;
        }
        ans = max(ans,end-start+1);
        end++;
    }
    return ans;

    }
};