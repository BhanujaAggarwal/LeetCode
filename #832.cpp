class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        vector<vector<int>> ans;
        for(auto a:A){
            vector<int> temp;
            for(auto s:a){
                temp.push_back(!s);
            }
            reverse(temp.begin(),temp.end());
            ans.push_back(temp);
        }
        return ans;
    }
};