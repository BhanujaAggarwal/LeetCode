/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        int ans = 0;
        int heightt = height(root,ans);
        return ans-1;
    }
    
    int height(TreeNode* root, int& ans){
        if(!root) return 0;
        int l_ht = height(root->left,ans);
        int r_ht = height(root->right,ans);
        ans = max(ans,1+l_ht+r_ht);
        return 1+ max(l_ht,r_ht);
    }
};