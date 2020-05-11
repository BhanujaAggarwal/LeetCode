class Solution {
public:
    int findSpecialInteger(vector<int>& a) {
        int n = a.size();
        int occur = n/4;
        for(int i=0;i<n-1;i++){
            if(a[i]!=a[i+1]) 
                if(count(a.begin(),a.end(),a[i])>occur) return a[i];
        }
        return a[n-1];
    }
};