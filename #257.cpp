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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        if(!root) return ans;
        string tmp = to_string(root->val);
        help(root,ans,tmp);
        return ans;
    }
    void help(TreeNode* root,vector<string>& ans, string tmp){
        if(root->left == root->right) {
            ans.push_back(tmp);
            return;
        } 
        if(root->left){
            help(root->left,ans,tmp + "->" + to_string(root->left->val));
        }
        if(root->right){
            help(root->right,ans,tmp + "->" + to_string(root->right->val));
        }
    }
};