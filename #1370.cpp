class Solution {
public:
    string sortString(string s) {
        string result="";
        int alp[26] = {0};
        int n =s.length();
        while(n--){
            alp[s[n]-'a']++;
        }
        n =s.length();
        while(s.length()!=result.length()){
            for(int i=0;i<26;i++){
                if(alp[i]){
                 result += 'a' + i;
                    alp[i]--;
                }
            }
            for(int i=25;i>=0;i--){
                if(alp[i]){
                 result += 'a' + i;
                    alp[i]--;
                }  
            }
        }
        return result;
    }
};