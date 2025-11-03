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
    bool isValidBST(TreeNode* root) {
        
        return solve(root,LLONG_MIN,LLONG_MAX);
    
    }

    bool solve(TreeNode* node,long long low,long long high){

        if(node == nullptr){
            return true;
        };
        
        long long val = node->val;
        
        if(val<= low || val >= high){
            return false;
        };

        return solve(node->left,low,val)&&solve(node->right,val,high);
    };

};