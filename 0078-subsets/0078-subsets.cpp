class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>>ans;

        vector<int>comb;

        int len = nums.size();

        int idx = 0;

        solve(ans,nums,comb,len,idx);
    

        return ans;

    }

    void solve(vector<vector<int>>& ans,vector<int>& nums ,vector<int>comb,int len,int idx){
        
        if(idx >= len){
            ans.push_back(comb);
            return;
        };

        comb.push_back(nums[idx]);
        solve(ans,nums,comb,len,idx+1);
        comb.pop_back();
        solve(ans,nums,comb,len,idx+1);

    };

};