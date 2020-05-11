class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int ans=0;
        int n = chars.size();
        unordered_map<char,int> m;
        for(int i=0;i<n;i++){
            m[chars[i]]++;
        }
        for(auto i:words){
            unordered_map<char,int> t;
            bool flag = 1;
            for(int j=0;j<i.size();j++){
                t[i[j]]++;
            }
            for(int j=0;j<i.size();j++){
                if(!m[i[j]] or m[i[j]]<t[i[j]]){
                    flag = 0;
                    break;
                }
            }
            if(flag) {
                ans+=i.size();
            }
            
        }
        return ans;
    }
};