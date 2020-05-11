class Solution {
public:
    int findRadius(vector<int>& ho, vector<int>& h) {
        sort(h.begin(),h.end());
        sort(ho.begin(),ho.end());
        int ans = 0;
        for(auto i:ho){
            auto it = lower_bound(h.begin(),h.end(),i);
            if(it==h.end()){
                ans = max(ans,i-h.back());
            } else if(it==h.begin()){
                ans = max(ans,*it-i);
            }
            else{
                ans = max(ans,min((*it-i),i-*(it-1)));
            }
        }
        return ans;
    }
};