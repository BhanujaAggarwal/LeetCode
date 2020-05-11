class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& n, int r, int c) {
        vector<vector<int>> ans;
        if(n.size()*n[0].size() != r*c) return n;
        vector<int> v;
        for(auto k:n)
            for(auto l:k)
                v.push_back(l);
        int m=0;
        for(int i=0;i<r;i++){
            vector<int> t;
            for(int j=0;j<c;j++)
                t.push_back(v[m++]);
            ans.push_back(t);
        }
        return ans;
    }
};