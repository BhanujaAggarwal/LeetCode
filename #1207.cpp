class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> cnt;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]!=arr[i+1]){
                cnt.push_back(count(arr.begin(),arr.end(),arr[i]));
            }
        }
        if(arr[arr.size()-1]!=arr[arr.size()-2]){
            cnt.push_back(count(arr.begin(),arr.end(),arr[arr.size()-1]));
        }
        set<int> s;
        for(int i=0;i<cnt.size();i++){
            s.insert(cnt[i]);
        }
        if(cnt.size()==s.size()){
            return true;
        }
        return false;
    }
};