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
    vector<TreeNode*> v;
    TreeNode *ans,*curr;
    TreeNode* increasingBST(TreeNode* root) {
        if(root==NULL) return NULL;
        increasingBST(root->left);
        
        if(!ans){
            ans = new TreeNode(root->val);
            curr=ans;
        }else{
            curr->right = new TreeNode(root->val);
            curr = curr->right;
        }
        
        increasingBST(root->right);
        
        return ans;
    }
};