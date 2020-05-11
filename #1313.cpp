class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size()-1;i+=2){
            int freq = nums[i];
            int val = nums[i+1];
            cout<<freq<<" "<<val<<endl;
            while(freq--){
                ans.push_back(val);
            }
        }
        return ans;
    }
};