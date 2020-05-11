class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size(),maxi=0,i=0;
        int count=0;
        while(i<n){
            if(nums[i]) count++;
            else count=0;
            maxi = max(maxi,count);
            i++;
        }
        return maxi;
    }
};