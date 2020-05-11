class Solution {
public:
    bool isSubsequence(string t, string s) {
        int i=0,j=0;
        while(i<s.size() and j<t.size()){
            if(t[j]==s[i]) j++;
            i++;
        }
        if(j==t.size()) return true;
        return false;
    }
};