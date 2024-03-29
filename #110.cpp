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
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        if(abs(height(root->left) - height(root->right)) >1) return false;
        return isBalanced(root->left) and isBalanced(root->right);
    }
    int height(TreeNode* root){
        if(!root) return 0;
        return 1+ max(height(root->left),height(root->right));
    }
};