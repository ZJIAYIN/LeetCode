class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        

        vector<vector<int>>ans;

        vector<int>comb;

        int idx = 0;

        int tol = 0;

        solve(candidates, target,ans,comb,idx,tol);

       return ans;

    }

    void solve(vector<int>& candidates, int target,vector<vector<int>>& ans,vector<int>comb,int idx,int tol){

        if(tol == target){
            ans.push_back(comb);
            return;
        };

        if(idx >= candidates.size() || tol > target){
            return;
        };

        comb.push_back(candidates[idx]);
        solve(candidates,target,ans,comb,idx,tol+candidates[idx]);

        comb.pop_back();
        solve(candidates,target,ans,comb,idx+1,tol);



    };

};