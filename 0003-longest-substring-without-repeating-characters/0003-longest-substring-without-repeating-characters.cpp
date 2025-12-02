class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int len = s.length();
        int le = 0;
        int rt = 0;
        int ans = 1;
        map<char,int>mp;
        mp[s[le]] = 1;
      
        while(le<len && rt<len){
            if(le == rt){
                rt++;
                if(rt>=len){
                    break;
                };
                mp[s[rt]]++;
            }
            else{
                rt++;
                if(rt>=len){
                    break;
                };
                mp[s[rt]]++;
            };

            while(mp[s[rt]] > 1){
                mp[s[le]]--;
                le++;
            };
            ans = max(ans,rt-le+1);

        };

        return ans;
    }
};