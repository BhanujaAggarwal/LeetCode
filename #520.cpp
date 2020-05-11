class Solution {
public:
    bool detectCapitalUse(string word) {
        int c=0;
        for(auto i:word){
            if(isupper(i)) c++;
        }
        if(c==1 and !isupper(word[0])) return false;
        if(c>1 and c!=word.size()) return false;
        return true;
    }
};