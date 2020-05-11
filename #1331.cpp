class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        set<int> s;
        for(auto i:arr) s.insert(i);
        map<int,int> m;
        int l=1;
        for(auto i:s) m[i] = l++;
        for(l=0;l<arr.size();l++) arr[l] = m[arr[l]];
        return arr;
    }
};