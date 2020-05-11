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
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return iss(root->left,root->right);
    }
    bool iss(TreeNode* l,TreeNode* r){
        if(!l and !r) return true;
        if(l and r and l->val==r->val) return iss(l->right,r->left) and iss(l->left,r->right);
        return false;
    }
};