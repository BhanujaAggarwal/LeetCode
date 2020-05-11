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
    vector<int> res;
    int freq=0,prev=INT_MIN, max_freq = 0;
    vector<int> findMode(TreeNode* root) {
        inorder(root);
        return res;
    }
    void inorder(TreeNode* root){
        if(!root) return;
        inorder(root->left);
        
        if(root->val == prev) freq++;
        else freq = 1;
        
        if(freq>max_freq){
            res.clear();
            max_freq = freq;
            res.push_back(root->val);
        }
        else if(freq==max_freq){
            res.push_back(root->val);
        }
        prev = root->val;
        inorder(root->right);
    }
};