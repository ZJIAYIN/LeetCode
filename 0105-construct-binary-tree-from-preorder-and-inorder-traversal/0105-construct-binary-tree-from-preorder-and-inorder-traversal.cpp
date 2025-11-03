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

    int nar = 0;
    unordered_map<int,int>mp;

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        int len = preorder.size();
        for(int i = 0;i<len;i++){
            int ele = preorder[i];
            for(int j = 0;j<len;j++){
                if(inorder[j] == ele){
                    mp[ele] = j;
                };
            };
        };

        
        return solve(preorder,inorder,0,len-1);


    }

    TreeNode* solve(vector<int>& preorder, vector<int>& inorder,int le,int rt){

        if(le>rt){
            return nullptr;
        };

        int ele = preorder[nar++];
        int wt = mp[ele];

        TreeNode* node = new TreeNode();
        node->val = ele;

        
        node->left = solve(preorder,inorder,le,wt-1);
        
        node-> right = solve(preorder,inorder,wt+1,rt);

        return node;

    };



};