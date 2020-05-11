class Solution {
public:
    int findLUSlength(string a, string b) {
        int l1 = a.size();
        int l2 = b.size();
        if(l1!=l2) return max(l1,l2);
        if(a==b) return -1;
        return l1;
    }
};