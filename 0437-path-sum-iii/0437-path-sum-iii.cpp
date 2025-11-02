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
       
       if(root == nullptr){
            return 0;
       };

       return pathSum(root->left,targetSum) + pathSum(root->right,targetSum) + count(root,targetSum);

    }

    int count(TreeNode* root, long long targetSum){

        if(root == nullptr){
            return 0;
        };

        int tmp = 0;

        if(root->val == targetSum){
            tmp++;
        };

        return tmp + count(root->left,targetSum - root->val) + count(root->right,targetSum - root->val);

    };

};