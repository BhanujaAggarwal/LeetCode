class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        int ans;
        sort(A.begin(),A.end());
        for(int i=0;i<A.size()-1;i++){
            if(A[i]==A[i+1]){
                ans=A[i];
                break;
            }
        }
        return ans;
    }
};