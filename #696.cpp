class Solution {
public:
    int countBinarySubstrings(string s) {
        int count=1,n=s.size();
        vector<int> v;
        for(int i=1;i<=n;i++){
            if(s[i]==s[i-1]){
                count++;
            } else{
                v.push_back(count);
                count=1;
            }
        }
        count=0;
        for(int i=1;i<v.size();i++){
            count+=min(v[i],v[i-1]);
        }
        return count;
    }
};