class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        int n = A.size(),j=0;
        vector<int> even,odd,ans;
        for(auto i:A){
            if(i%2){
                odd.push_back(i);
            }else{
                even.push_back(i);
            }
        }
        for(int i=0;i<n;i++){
            if(i%2){
                ans.push_back(odd[odd.size()-1]);
                odd.pop_back();
            } else{
                ans.push_back(even[even.size()-1]);
                even.pop_back();
            }
        }
        return ans;
    }
};