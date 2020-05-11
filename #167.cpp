class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        vector<int> ans;
        for(int i=0;i<n.size();i++){
            if(t-n[i]>=0){
                int y = binary_search(n.begin(),n.end(),t-n[i]);
                int yy = lower_bound(n.begin(),n.end(),t-n[i]) - n.begin();
                if(y and i!=yy){
                    ans.push_back(i+1);
                    ans.push_back(yy+1);
                    sort(ans.begin(),ans.end());
                    return ans;
                }
            }
        }
        return ans;
    }
};