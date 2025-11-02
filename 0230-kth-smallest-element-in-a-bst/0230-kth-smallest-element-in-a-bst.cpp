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
    int kthSmallest(TreeNode* root, int k) {
        
        vector<int>ans;

        solve(root,ans);

        return ans[k-1];

    }

    void solve(TreeNode* root,vector<int>& vtr){


        if(root->left != nullptr){
            solve(root->left,vtr);
        };

         if(root != nullptr){
            vtr.push_back(root->val);
        };

         if(root->right != nullptr){
            solve(root->right,vtr);
        };

        return;

    };

};