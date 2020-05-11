class Solution {
public:
    string reverseVowels(string s) {
        string k="";
        for(auto i:s){
            if(i=='a' or i=='e' or i=='i' or i=='o' or i=='u' or i=='A' or i=='E' or i=='I' or i=='O' or i=='U') k+=i;
        }
        reverse(k.begin(),k.end());
        int j=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u' or s[i]=='A' or s[i]=='E' or s[i]=='I' or s[i]=='O' or s[i]=='U'){
                s[i] = k[j],j++;
            } 
        }
        return s;
    }
};