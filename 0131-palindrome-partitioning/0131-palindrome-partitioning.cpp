class Solution {
public:

    int n;

    vector<vector<string>> partition(string s) {

        n = s.length();
        vector<vector<string>>ans;
        vector<string>comb;

        solve(ans,comb,s,0);

        return ans;
    }

    bool rg(int l,int r,string s){
        while(l<r){
            if(s[l] != s[r]){
                return false;
            };
            l++;
            r--;
        };

        return true;
    };

    void solve(vector<vector<string>>& ans,vector<string>comb,string s,int idx){

        if(idx == n){
            ans.push_back(comb);
            return;
        };

        for(int i = idx;i<n;i++){
            if(rg(idx,i,s)){
                comb.push_back(s.substr(idx,i-idx+1));
                solve(ans,comb,s,i+1);
                comb.pop_back();
            };


        };

    };

};