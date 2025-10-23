class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int ans1 = -1;
        int ans2 = -1;
        int le = 0;
        int rt = nums.size() - 1;

        while(le<rt){
            int mid = ( le + rt ) >> 1;
            if(target <= nums[mid]){
                rt = mid;
            }
            else{
                le = mid + 1;
            };

        };

        if(nums[le] == target){
            ans1 = le;
            le = 0;
            rt = nums.size() - 1;
            while(le<rt){
                int mid = (le + rt + 1) >> 1;
                if(nums[mid] <= target){
                    le = mid;
                }
                else{
                    rt = mid - 1;
                };
            };

            ans2 = le;

        };

        vector<int>ans;

        ans.push_back(ans1);
        ans.push_back(ans2);

        return ans;

    }
};