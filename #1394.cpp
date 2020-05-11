class Solution {
public:
    int findLucky(vector<int>& arr) {
        sort(arr.begin(),arr.end(),greater<int>());
        for(int i=0;i<arr.size();i++){
            if(count(arr.begin(), arr.end(), arr[i]) == arr[i]){
                return arr[i];
            }
        }
        return -1;
    }
};