class Solution {
public:
    vector<string> reorderLogFiles(vector<string>& logs) {
        vector<string> ans;
        int n = logs.size();
        vector<pair<string,string>> s1;
        vector<string> s2;
        for(auto i:logs){
            for(int j=0;j<i.length();j++){
                if(i[j]==' '){
                    if(isalpha(i[j+1])){
                        string q = string(i.begin(),i.begin()+j);
                        string w = string(i.begin()+j,i.end());
                        s1.push_back(make_pair(w+q,i));
                    } 
                    else s2.push_back(i);
                    break;
                }
            }
        }
        sort(s1.begin(),s1.end());
        for(auto i:s1) ans.push_back(i.second);
        for(auto i:s2) ans.push_back(i);
        return ans;
    }
};