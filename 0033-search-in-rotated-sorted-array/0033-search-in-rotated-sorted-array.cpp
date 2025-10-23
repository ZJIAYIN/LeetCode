class Solution {
public:
    int search(vector<int>& nums, int target) {

       int le = 0;
       int rt = nums.size() - 1;


       while(le<rt){
            int mid = (le + rt)>>1;
            if(nums[mid] <= nums[rt]){
                rt = mid;
            }
            else{
                le = mid + 1;
            };
       };

       int temp1 = le;
        int temp2 = le;

        le = 0;
        rt = temp1;
       
        while(le<rt){
            int mid = (le + rt)>>1;
           if(target <= nums[mid]){
                rt = mid;
           }
           else{
            le = mid + 1;
           };
       };

       if(nums[le] == target){
          
            return le;
       };

       le = temp2;
        rt = nums.size()-1;

        while(le < rt){
            int mid = (le + rt) >> 1;
            if(target <= nums[mid]){
                rt = mid;
            }
            else{
                le = mid + 1;
            };
        };

        if(target == nums[le]){
            return le;
        };

        return -1;

    }
};