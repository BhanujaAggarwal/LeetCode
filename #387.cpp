class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size();
        map<char,int> m;
        for(auto i:s) m[i]=0;
        for(auto i:s) m[i]++;
        for(int i=0;i<n;i++) if(m[s[i]]==1) return i;
        return -1;
    }
};