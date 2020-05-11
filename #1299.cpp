class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ans;
        int sz = arr.size();
        int maxi = -1;
        for(int i=0;i<sz;i++){
            ans.push_back(maxi);
            maxi = max(maxi,arr[sz-1-i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};