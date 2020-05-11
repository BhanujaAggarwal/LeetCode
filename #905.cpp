class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> even;
        vector<int> odd;
        
        for(auto s: A){
            if(s%2==0) even.push_back(s);
            else odd.push_back(s);
        }
        vector<int> ans(even);
        ans.insert(ans.end(),odd.begin(),odd.end());
        return ans;
    }
};