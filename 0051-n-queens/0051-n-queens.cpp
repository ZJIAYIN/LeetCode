class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        
        vector<vector<string>>ans;

        vector<vector<string>>comb(n,vector<string>(n,"."));

        int d = 0;

        vector<int>col(n+5);

        vector<int>dj(2*n+5);

        vector<int>fdj(2*n+5);

        solve(ans,comb,d,n,col,dj,fdj);

        return ans;

    }

    void solve(vector<vector<string>>& ans,vector<vector<string>>comb,int d,int& n,vector<int>col,vector<int>dj,vector<int>fdj){
        
        if(d >= n){
          vector<string>tmp;
          for(int i = 0;i<n;i++){
            string str = "";
            for(int j = 0;j<n;j++){
                str += comb[i][j];
            };
            tmp.push_back(str);
          };

            ans.push_back(tmp);
            return;

        };

        //dfs

        for(int i = 0;i<n;i++){
           if(!col[i] && !dj[d+i] && !fdj[d-i+n]){
                col[i] = dj[d+i] = fdj[d-i+n] = 1;
                comb[d][i] = "Q";
                solve(ans,comb,d+1,n,col,dj,fdj);
                comb[d][i] = ".";
                col[i] = dj[d+i] = fdj[d-i+n] = 0;
           }; 
        };

    };


};