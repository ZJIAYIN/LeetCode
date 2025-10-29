/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        

        return solve(nums,0,nums.size()-1);

    }

    TreeNode* solve(vector<int>& nums,int le,int rt){

        if(le>rt){
            return nullptr;
        };

        int mid = ( le + rt ) >> 1;
        TreeNode* node = new TreeNode(nums[mid]);
        node->left = solve(nums,le,mid-1);
        node->right = solve(nums,mid+1,rt);

        return node;
    };

};