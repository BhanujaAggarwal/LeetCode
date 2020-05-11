class Solution {
public:
    bool canConstruct(string r, string m) {
        int s1[26]={0},s2[26]={0};
        for(auto i:r) s1[i-'a']++;
        for(auto i:m) s2[i-'a']++;
        for(int i=0;i<26;i++) if(s1[i]>s2[i]) return false;
        return true;
    }
};