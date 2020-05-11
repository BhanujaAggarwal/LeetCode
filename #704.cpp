class Solution {
public:
    int search(vector<int>& nums, int t) {
        return bs(0,nums.size()-1,t,nums);
    }
    int bs(int l,int r, int t,vector<int> nums){
        if(l>r) return -1;
        int mid = (l+r)/2;
        if(nums[mid]==t) return mid;
        else if(nums[mid]>t) return bs(l,mid-1,t,nums);
        return bs(mid+1,r,t,nums);
    }
};