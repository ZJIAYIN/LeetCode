class Solution {
public:
    vector<string> letterCombinations(string digits) {
        
        vector<string> ans;

        int len = digits.length();

        if(len == 0){
            return ans;
        };

         string mapping[10] = {"",    "",    "abc",  "def", "ghi",
                              "jkl", "mno", "pqrs", "tuv", "wxyz"};

        int i = 0;
        string output = "";

        solve(digits,output,i,ans,mapping,len);

        return ans;
    
    }

    void solve(string digits,string output,int i,vector<string>& ans,string mapping[],int len){

        if(i>=len){
            ans.push_back(output);
            return;
        };

        int index = digits[i] - '0';
        string ele = mapping[index];

        for(int j = 0;j<ele.length();j++){
            output += ele[j];
            solve(digits,output,i+1,ans,mapping,len);
            output.pop_back();
        };

    };


};