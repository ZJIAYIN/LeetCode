class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int le = 0;
        int rt = nums.size()-1;

        while(le<rt){
            int mid = (le + rt )>>1;
            if(target <= nums[mid]){
                rt = mid;
            }
            else{
                le = mid + 1;
            };

        };

    
       return nums[le] < target ? le + 1 : le;

    }
};