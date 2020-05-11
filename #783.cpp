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
    int minDiffInBST(TreeNode* root) {
        vector<int> v;
        inorder(root,v); 
        int min = v[1]-v[0];
        for(int i=1;i<v.size()-1;i++){
            if(min>v[i+1]-v[i]){
                min = v[i+1]-v[i];
            }
        }
        return min;
    }
    void inorder(TreeNode* root,vector<int>& v){
        if(!root) return;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
};