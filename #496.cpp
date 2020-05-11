class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v,ans;
        int n = nums2.size();
        int nn = nums1.size();
        for(int i=0;i<n-1;i++){
            int mx = -1;
            for(int j=i+1;j<n;j++){
                if(nums2[j]>nums2[i]){
                    v.push_back(nums2[j]);
                    break;
                } else if(j==n-1) v.push_back(-1);
            }
        }
        v.push_back(-1);
        for(auto i:nums1){
            for(int j=0;j<n;j++){
                if(i==nums2[j]){
                    ans.push_back(v[j]);
                    break;
                }
            }
            
        }
        return ans;
    }
};