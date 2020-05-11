class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> copy = nums;
        vector<int> count;
        sort(nums.begin(),nums.end());
        for(int i=0;i<copy.size();i++){
            count.push_back(lower_bound(nums.begin(),nums.end(),copy[i])-nums.begin());
        }
        return count;
    }
};