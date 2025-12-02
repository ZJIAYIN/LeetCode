class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

       sort(nums.begin(),nums.end());
        int len = nums.size();
        vector<vector<int>>ans;

        for(int i = 0;i<len;i++){
            if(i-1>=0 && nums[i] == nums[i-1]){
                continue;
            };
            for(int j = i + 1;j<len;j++){
                if(j-1>i && nums[j] == nums[j-1]){
                    continue;
                };

                int target = 0 - nums[i] - nums[j];
                int le = j + 1;
                if(le >= len){
                    break;
                };
                int rt = len - 1;
                if((nums[i] + nums[j] + nums[rt]) < 0){
                    continue;
                };
                while(le < rt){
                    int mid = (le + rt + 1) >> 1;
                    if(nums[mid]<= target){
                        le = mid;
                    }
                    else{
                        rt = mid - 1;
                    };
                };

                if(nums[le] == target){
                    vector<int>tmp;
                    tmp.push_back(nums[i]);
                    tmp.push_back(nums[j]);
                    tmp.push_back(nums[le]);
                    ans.push_back(tmp);
                };


            };

        };

        return ans;
    }
};