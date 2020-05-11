class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        vector<int> ans;
        int a = accumulate(A.begin(),A.end(),0);
        int b = accumulate(B.begin(),B.end(),0);
        int diff = (a-b)/2;
        unordered_set<int> AA(A.begin(),A.end());
        unordered_set<int> BB(B.begin(),B.end());
        for(auto b:BB){
            if(AA.find(b+diff)!=AA.end()){
                ans.push_back(b+diff);
                ans.push_back(b);
                break;
            }
        }
        return ans;
    }
};