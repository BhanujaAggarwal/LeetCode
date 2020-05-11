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
    int findTilt(TreeNode* root) {
        int ans = 0;
        help(root,ans);
        return ans;
    }
    int help(TreeNode* root, int& ans){
        if(!root) return 0;
        int left = help(root->left,ans);
        int right = help(root->right,ans);
        ans += abs(left-right);
        return left + right + root->val;
    }
};