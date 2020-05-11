class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
        set<int> r,c;
        int m = a.size();
        int n = a[0].size();
        for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(!a[i][j]){
                r.insert(i);
                c.insert(j);
            }
        }
    }
    for(auto row:r){
        for(int i=0;i<n;i++){
            a[row][i]=0;
        }
    }
    for(auto col:c){
        for(int i=0;i<m;i++){
            a[i][col]=0;
        }
    }
    }
};