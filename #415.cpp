class Solution {
public:
    string addStrings(string n1, string n2) {
        reverse(n1.begin(),n1.end());
        reverse(n2.begin(),n2.end());
        string ans="";
        int c=0;
        for(int i=0;i<max(n1.size(),n2.size());i++){
            int k=0;
            if(i<n1.size()) k+=(n1[i]-'0');
            if(i<n2.size()) k+=(n2[i]-'0');
            ans+=to_string((c+k)%10);
            c = (c+k)/10;
        }
        if(c) ans+=to_string(c);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};