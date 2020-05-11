class Solution {
public:
    string reverseStr(string s, int k) {
        string ans="";
        int kk = k,i=0;
        while(i<s.size()){
            string q="";
            kk=k;
            while(kk and i<s.size()){
                q+=s[i];
                kk--;
                i++;
            }
            reverse(q.begin(),q.end());
            ans+=q;
            kk =k;
            while(kk and i<s.size()){
                ans+=s[i];
                kk--;
                i++;
            }
        }
        return ans;
    }
};