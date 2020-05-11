class Solution {
public:
    int numSpecialEquivGroups(vector<string>& A) {
        for(int i=0;i<A.size();i++){
            A[i] = sortt(A[i]);
        }
        sort(A.begin(),A.end());
        int count=1;
        for(int i=1;i<A.size();i++){
            if(A[i-1] != A[i]){
                count++;
            }
        }
        return count;
    }
    string sortt(string s){
        int n = s.size();
        string ans="",odd="",even="";
        for(int i=0;i<n;i++){
            if(i%2){
                odd+=s[i];
            } else even+=s[i];
        }
        sort(odd.begin(),odd.end());
        sort(even.begin(),even.end());
        int i=0,f=1;
        while(ans.size()<n){
            if(f){
                ans+=even[i];
            } else{
                ans+=odd[i];
                i++;
            }
            f=!f;
        }
        return ans;
    }
};