class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int len = nums.size();

        int ans = 0;

        int arr[len+1];

        for(int i = 1;i<=len;i++){
            arr[i] = arr[i-1] + nums[i-1];
        };

        for(int i = 1;i<=len;i++){
            for(int j = i;j<=len;j++){
                if(arr[j] - arr[i-1] == k){
                    ans++;
                };
            };
        };

        return ans;

    }
};