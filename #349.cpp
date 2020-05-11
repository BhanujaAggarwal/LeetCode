class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> ss1(nums1.begin(),nums1.end());
        set<int> ss2(nums2.begin(),nums2.end());
        
        int i=0,j=0;
        vector<int> ans,s1(ss1.begin(),ss1.end()),s2(ss2.begin(),ss2.end());
        while(i<s1.size() and j<s2.size()){
            if(s1[i]==s2[j]){
                ans.push_back(s1[i]);
                i++,j++;
            } else if(s1[i]>s2[j]){
                j++;
            } else{
                i++;
            }
        }
        return ans;
    }
};