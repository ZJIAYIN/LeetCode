class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int len = nums.size();
        int le = 0;
        int rt = 1;
        sort(nums.begin(),nums.end());

        int ans = 1;
        int tmp = 1;

        if(len == 0){
            return 0;
        };

        while(le<len && rt<len && le<rt){
            if(nums[le] == nums[rt]){
                rt++;
            }
            else if(nums[rt] - nums[le] == 1){
                tmp++;
                ans = max(ans,tmp);
                le = rt;
                rt++;
            }
            else{
                ans = max(ans,tmp);
                le = rt;
                rt++;
                tmp = 1;
            };
        };

        return ans;

    }
};