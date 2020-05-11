class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        queue<int> s;
        int n = arr.size();
        for(auto i:arr){
            s.push(i);
            arr.pop_back();
        } 
        for(int i=0;i<n;i++){
            arr.push_back(s.front());
            if(!s.front() and arr.size()<n) arr.push_back(s.front()),i++;
            s.pop();
        }
    }
};