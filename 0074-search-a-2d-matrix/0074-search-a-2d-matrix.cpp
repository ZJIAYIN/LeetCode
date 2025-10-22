class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int x = matrix.size();
        int y = matrix[0].size();

        vector<int>tmp;

        for(int i = 0;i<x;i++){
            for(int j = 0;j<y;j++){
                tmp.push_back(matrix[i][j]);
            };
        };

        int le = 0;
        int rt = x * y - 1;

        if(target > tmp[rt]){
            return false;
        };

        if(target < tmp[le]){
            return false;
        };

        while(le<rt){
            int mid = (le + rt) >> 1;
            if(target <= tmp[mid]){
                rt = mid;
            }
            else{
                le = mid + 1;
            };
        };

        return tmp[le] == target;

    }
};