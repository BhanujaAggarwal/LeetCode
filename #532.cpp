class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(k<0) return 0;
        int cnt = 0 ;
        unordered_map<int,int> m;
        for(auto i:nums) {
            m[i]++;
        }
        for(auto i:nums) {
            if(!m[i]) continue;
            if(!k and m[i]>1) cnt++;
            if(k and m[i-k]){
                cnt++;
            } 
            if(k and m[i+k]){
                cnt++;
            }
            m[i]=0;
        }
        return cnt;
    }
};
