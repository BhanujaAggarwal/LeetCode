class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string word="",ans;
        for(auto i:s){
            if(i==' '){
                v.push_back(word);
                word = "";
            } 
            else word+=i;
        }
        v.push_back(word);
        for(auto i:v){
            reverse(i.begin(),i.end());
            ans+=i;
            ans+=" ";
        }
        int n = ans.size();
        ans.erase(n-1);
        return ans;
    }
};