class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& m) {
        int col = m[0].size();
        int row = m.size();
        for(int j=0;j<col;j++){
            int curr = m[0][j];
            int y=1,k=j+1;
            while(y<row and k<col){
                if(curr != m[y][k]) return false;
                y++;
                k++;
            }
        }
        for(int j=0;j<row;j++){
            int curr = m[j][0];
            int y=j+1,k=1;
            while(y<row and k<col){
                if(curr != m[y][k]) return false;
                y++;
                k++;
            }
        }
        
        return true;
    }
};