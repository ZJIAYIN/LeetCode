class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>>ans;

        vector<int>comb;

        int len = nums.size();

        vector<int>vis(len);

        solve(ans,comb,nums,vis,len);

        return ans;

    }

    void solve(vector<vector<int>>&ans,vector<int>comb,vector<int>& nums,vector<int>vis,int len){
        
        if(comb.size() == len){
            ans.push_back(comb);
            return;
        };

        for(int i = 0;i<len;i++){
            if(!vis[i]){
                vis[i] = 1;
                comb.push_back(nums[i]);
                solve(ans,comb,nums,vis,len);
                vis[i] = 0;
                comb.pop_back();
            };
        };

    };

};