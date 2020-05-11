class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> ans;
        int mini=abs(arr[1]-arr[0]);
        sort(arr.begin(),arr.end());
        for(int i=1;i<arr.size()-1;i++){
            mini = min(mini,(abs(arr[i+1]-arr[i])));
        }
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i+1]-arr[i]==mini){
                vector<int> v;
                v.push_back(arr[i]);
                v.push_back(arr[i+1]);
                ans.push_back(v);
            }
        }
        return ans;
    }
};