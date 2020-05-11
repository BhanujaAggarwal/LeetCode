class Solution {
public:
    bool checkRecord(string s) {
        int flag=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A' and flag) return false;
            if(s[i]=='A') flag=1;
            if(i+2<s.size() and s[i]=='L' and s[i+1]=='L' and s[i+2]=='L') return false;
        }
        return true;
    }
};