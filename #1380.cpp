class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> ans;
        int rows = matrix.size();
        int col = matrix[0].size();
        int mini[rows];
        for(int i=0;i<rows;i++){
            mini[i]=*min_element(matrix[i].begin(),matrix[i].end());
        }
        for(int i=0;i<rows;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==mini[i]){
                    int maxi = 0;
                    for(int k=0;k<rows;k++){
                        maxi=max(maxi,matrix[k][j]);
                    }
                    if(maxi==matrix[i][j]){
                        ans.push_back(maxi);
                    }
                }
            }
        }
        return ans;
    }
};