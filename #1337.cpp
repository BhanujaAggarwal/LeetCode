class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int r = mat.size();
        vector<int> ans;
        vector<pair<int,int>> t;
        int j=0;
        for(auto i:mat){
            t.push_back(make_pair(accumulate(i.begin(),i.end(),0), j));
            j++;
        }
        sort(t.begin(),t.end());
        for(int i=0;i<k;i++){
            ans.push_back(t[i].second);
        }
        return ans;
    }
};