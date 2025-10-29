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
    int maxDepth(TreeNode* root) {
        
        if(root == NULL){
            return 0;
        };

        int step = 1;

        int ans = 1;

        solve(root,step,ans);

        return ans;
    }

    void solve(TreeNode* root,int step,int& ans){
        
        ans = max(step,ans);

        if(root->left != NULL){
            solve(root->left,step+1,ans);
        };

        if(root->right != NULL){
            solve(root->right,step+1,ans);
        };
    };
};