class Solution {
public:
    int balancedStringSplit(string s) {
        int r=0;
        int l=0;
        int count=0;
        string curr = "";
        for(int i=0;i<s.length();i++){
            if(r==l && r!=0){
                count++;
                r=0;
                l=0;
            }
            if(s[i] == 'L'){
                l++;
                curr+="L";
            } else{
                r++;
                curr+="R";
            }
        }
        if(r==l && r!=0){
            count++;
            r=0;
            l=0;
        }
        return count;
    }
};