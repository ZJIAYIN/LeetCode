class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int len = nums.size();
        vector<int>dp(len,0);
        dp[0] = nums[0];

        for(int i = 1;i<len;i++){
            if(dp[i-1]<0){
                dp[i] = nums[i];
            }
            else{
                dp[i] = dp[i-1] + nums[i];
            };
        };

        int ans = -1e9;
        for(int i = 0;i<len;i++){
            ans = max(ans,dp[i]);
        };

        return ans;
    }
};