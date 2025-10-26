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
    vector<int> inorderTraversal(TreeNode* root) {
    
        vector<int>ans;

         if (root == NULL) return ans;
        
      solve(ans,root);

      return ans;

    }

    void solve(vector<int>&ans,TreeNode* root){

        if(root->left != NULL){
            solve(ans,root->left);
        };

        ans.push_back(root->val);

        if(root->right != NULL){
            solve(ans,root->right);
        };
    
    };

};