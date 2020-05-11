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
    int longestUnivaluePath(TreeNode* root) {
        int mx = 0;
        hlp(root,mx);
        return mx;
    }
    
    int mxone(TreeNode* root,int m){
        if(!root) return 0;
        if(root->val!=m)  return 0;
        return 1 + max(mxone(root->left,m),mxone(root->right,m));
    }
    
    void hlp(TreeNode* root,int& mx){
        if(root){
            int l = mxone(root->left,root->val);
            int r = mxone(root->right,root->val);
            mx = max(mx,l+r);
            hlp(root->left,mx);
            hlp(root->right,mx);
        }
    }
    
};