class Solution {
public:
    int findNumbers(vector<int>& nums) {
        string s;
        int count=0;
        for(int i=0;i<nums.size();i++){
            s = to_string(nums[i]);
            int len = s.length();
            if(len%2==0){
                count++;
            }
        }
        return count;
    }
};