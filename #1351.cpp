class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans=0;
        int rows = grid.size();
        int col = grid[0].size();
        for(int i=rows-1;i>=0;i--){    
            for(int j=col-1;j>=0;j--){
                if(grid[i][j]>0) break;
                ans++;
            }
        }
        return ans;
    }
};