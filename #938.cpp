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
    int rangeSumBST(TreeNode* root, int L, int R) {
        if(!root) return 0;
        int sum=0;
        if(L<=root->val && root->val<=R)
            sum+=root->val;
        if(L<=root->val)
            sum+=rangeSumBST(root->left,L,R);
        if(R>=root->val)
            sum+=rangeSumBST(root->right,L,R);
        return sum;
    }
};