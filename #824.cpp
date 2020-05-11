class Solution {
public:
    string toGoatLatin(string ss) {
        string ans="";
        int i=0,j=0;
        while(i<ss.size()){
            string s="";
            while(ss[i]!=' ' and i<ss.size()){
                s += ss[i];
                i++;
            }
            j++;
            if(s[0]!='a' and s[0]!='e' and s[0]!='i' and s[0]!='o' and s[0]!='u' and s[0]!='A' and s[0]!='E' and s[0]!='I' and s[0]!='O' and s[0]!='U'){
                ans+=s.substr(1,s.size()-1);
                ans+=s[0];
            }
            else{
                ans+=s;
            }
            ans+="ma";
            ans+=string(j,'a');
            if(i!=ss.size()) ans+=" ";
            i++;
        }
        return ans;
    }
};