class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int count=0,rc,rr;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(board[i][j]=='R'){
                    rr = i;
                    rc = j;
                }
            }
        }
        for(int j=rc-1;j>=0;j--){
            if(board[rr][j]=='B') break;
            if(board[rr][j]=='p'){
                count++;
                break;
            }
        }
        for(int j=rc+1;j<8;j++){
            if(board[rr][j]=='B') break;
            if(board[rr][j]=='p'){
                count++;
                break;
            }
        }
        for(int i=rr-1;i>=0;i--){
            if(board[i][rc]=='B') break;
            if(board[i][rc]=='p'){
                count++;
                break;
            }
        }
        for(int i=rr+1;i<8;i++){
            if(board[i][rc]=='B') break;
            if(board[i][rc]=='p'){
                count++;
                break;
            }
        }
        return count; 
    }
};