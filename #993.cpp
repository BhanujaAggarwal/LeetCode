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
    bool isCousins(TreeNode* root, int x, int y) {
        if(!isSiblings(root,x,y) and samelevel(root,x,1) == samelevel(root,y,1) ) return true;
        return false;
    }
    
    bool isSiblings(TreeNode* root, int a,int b){
        if(!root) return 0;
        return ((root->left != NULL and root->right != NULL and root->left->val == a and root->right->val ==b) or 
    (root->left != NULL and root->right != NULL and root->right->val == a and root->left->val ==b) or 
                isSiblings(root->left,a,b) or isSiblings(root->right,a,b) );
    }
    
    int samelevel(TreeNode* root,int a,int lev){
        if(!root) return 0;
        if(root->val == a) return lev;
        int l = samelevel(root->left,a,lev+1);
        if(l) return l;
        return samelevel(root->right,a,lev+1);
    }
};