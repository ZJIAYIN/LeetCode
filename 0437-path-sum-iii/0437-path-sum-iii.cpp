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
    int pathSum(TreeNode* root, int targetSum) {
        
        if(!root){
            return 0;
        };
        return pathSum(root->left,targetSum) + pathSum(root->right,targetSum) + count(root,targetSum);

    }

    int count(TreeNode* node,long long sum){

        int ans = 0;
        if(!node){
            return 0;
        };
        if(node->val == sum){
            ans++;
        };

        return ans + count(node->left,sum-node->val) + count(node->right,sum-node->val);

    };
};