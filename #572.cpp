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
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if(!t) return true;
        if(!s) return false;
        if(issame(s,t)) return true;
        return isSubtree(s->left,t) || isSubtree(s->right,t);
    }
    
    bool issame(TreeNode* s, TreeNode* t){
        if(!s and !t) return true;
        if(!s or !t) return false;
        return ( s->val==t->val and issame(s->left,t->left) and issame(s->right,t->right));
    }
        
};