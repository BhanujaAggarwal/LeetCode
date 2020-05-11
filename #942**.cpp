class Solution {
public:
    vector<int> diStringMatch(string S) {
        int n = S.length();
        int first = 0;
        int last = n;
        vector<int> ans;
        for(int i=0;i<=n;i++){
            if(S[i]=='I' || i==n){
                ans.push_back(first++);
            }else{
                ans.push_back(last--);
            }
        }
        return ans;
    }
};