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
    int sumRootToLeaf(TreeNode* root, int ans = 0) {
        if(!root) return 0;
        ans = ans*2 + root->val;
        if(root->left==root->right) return ans;
        return sumRootToLeaf(root->left,ans) + sumRootToLeaf(root->right,ans);
    }
};