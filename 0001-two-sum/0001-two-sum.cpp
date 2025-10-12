class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        map<int,int>map;
        vector<int>ans;

        int len = nums.size();


        for(int i = 0;i<len;i++){
            int want_n = target - nums[i];
            if(map.count(want_n) != 0){
                ans.push_back(map[want_n]);
                ans.push_back(i);
                break;
            };

            map[nums[i]] = i;
        };

        return ans;

    }
};