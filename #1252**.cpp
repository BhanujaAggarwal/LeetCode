class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        int odd=0;
        vector<bool> rows(n,false);
        vector<bool> col(m,false);
        for(auto v:indices){
            rows[v[0]] = !rows[v[0]];
            col[v[1]] = !col[v[1]];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(rows[i]^col[j]) odd++;
            }
        }
        return odd;
    }
};