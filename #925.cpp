class Solution {
public:
    bool isLongPressedName(string n, string t) {
        int i=0,j=0;
        int n1 = n.size();
        int n2 = t.size();
        if(n[0]!=t[0]) return false;
        while(i<n1 and j<n2){
            if(i>0 and t[j]!=n[i-1] and n[i]!=t[j]) return false;
            if(n[i]==t[j]) i++;
            j++;
        }
        while(j<n2){
            if(t[j]==n[n1-1]) j++;
            else break;
        }
        if(i==n1 and j==n2) return true;
        return false;
    }
};