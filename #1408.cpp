class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        set<string> ans;
        vector<string> a;
        for(int i=0;i<words.size()-1;i++){
            for(int j=i+1;j<words.size();j++){
                if(words[i].find(words[j])!=-1){
                    ans.insert(words[j]);
                } 
                if(words[j].find(words[i])!=-1){
                    ans.insert(words[i]);
                }
            }
        }
        for(auto i:ans) a.push_back(i);
        return a;
    }
};