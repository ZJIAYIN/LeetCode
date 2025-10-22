class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int le = 0;
        int rt = nums.size() - 1;

        while(le < rt){
            int mid = (le + rt ) >> 1;
            if(nums[mid] <= nums[rt]){
                rt = mid;
            }
            else{
                le = mid + 1;
            };
        };

        return nums[le];

    }
};