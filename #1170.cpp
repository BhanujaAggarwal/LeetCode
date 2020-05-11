class Solution {
public:
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words){
        vector<int> f1,ans;
        for(auto i:words){
            f1.push_back(fun(i));
        }
        sort(f1.begin(),f1.end());
        for(auto i:queries){
            int k = fun(i),c=0;
            for(auto j:f1) if(k<j) c++;
            ans.push_back(c);
        }
        return ans;
    }
    int fun(string s){
        sort(s.begin(),s.end());
        return count(s.begin(),s.end(),s[0]);
    }
};#11