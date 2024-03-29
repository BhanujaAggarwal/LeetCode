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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int s = nums.size();
        return makeBST(nums,0,s-1);
    }
    TreeNode* makeBST(vector<int>& nums, int start, int end){
        if(start>end) return NULL;
        int mid = (start+end)/2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = makeBST(nums,start,mid-1);
        root->right = makeBST(nums,mid+1,end);
        return root;
    }
};