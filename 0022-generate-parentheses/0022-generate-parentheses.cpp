class Solution {
public:
    vector<string> generateParenthesis(int n) {
        
        vector<string> ans;
        int le = 1;
        int rt = 0;
        string tmp = "(";

        solve(ans,tmp,le,rt,n);

        return ans;
    }

    void solve(vector<string>& ans,string tmp,int le,int rt,int tol){
        
        if(rt>le){
            return;
        };
        
        if((le + rt) == 2*tol){
            ans.push_back(tmp);
        }
        else{
             
                if(le<tol){
                    tmp += "(";
                    solve(ans,tmp,le+1,rt,tol);
                    tmp.pop_back();
                };

                if(rt<tol){
                    tmp += ")";
                    solve(ans,tmp,le,rt+1,tol);
                    tmp.pop_back();
                };
               


        };



    };    

};