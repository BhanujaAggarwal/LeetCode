class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        unordered_map<int,int> m,t;
        for(int i=0;i<arr2.size();i++){
            m.insert(make_pair(arr2[i],1));
        }
        vector<int> v;
        for(int i=0;i<arr1.size();i++){
            if(m[arr1[i]]) m[arr1[i]]++;
            else v.push_back(arr1[i]);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<arr2.size();i++){
            m[arr2[i]]--;
            while(m[arr2[i]]--){
                ans.push_back(arr2[i]);
            }
        }
        for(auto i:v){
            ans.push_back(i);
        }
        return ans;
    }
};