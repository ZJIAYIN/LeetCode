class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>>ans;

        vector<int>comb;

        int len = nums.size();

        vector<int> vis(len);

        int step = 0;

        solve(nums,len,vis,ans,comb,step);

        return ans;

    }

    void solve(vector<int>& nums,int len,vector<int>vis,vector<vector<int>>& ans,vector<int>comb,int step){
        
        if(step >= len){
            ans.push_back(comb);
            return;
        };

        for(int i = 0;i<len;i++){
            if(vis[i] == 0){
                comb.push_back(nums[i]);
                vis[i] = 1;
                solve(nums,len,vis,ans,comb,step+1);
                comb.pop_back();
                vis[i] = 0;
            };
        };

    };
};