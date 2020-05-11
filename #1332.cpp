class Solution {
public:
    int removePalindromeSub(string s) {
        bool a=0,b=0;
        string ss = s;
        sort(ss.begin(),ss.end());
        if(!s.size()) return 0;
        if(ss[0]=='a') a=1;
        if(ss[ss.size()-1] =='b') b=1;
        if(isPali(s) or (a and !b) or (!a and b)) return 1;
        return 2;
    }
    bool isPali(string s){
        int n = s.size(); 
        for(int i=0;i<n/2;i++){
            if(s[i]!=s[n-i-1]) return false;
        }
        return true;
    }
};