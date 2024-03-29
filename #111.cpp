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
    int minDepth(TreeNode* root) {
        return help(root);
    }
    int help(TreeNode* root){
        if(!root) return 0;
        if(!root->left or !root->right) return 1+ max(help(root->left),help(root->right));
        return 1+ min(help(root->left),help(root->right));
    }
};