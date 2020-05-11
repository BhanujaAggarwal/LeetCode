class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& a, vector<vector<int>>& queries) {
        vector<int> ans;
        long long int even=0;
        for(auto i:a){
            if(i%2==0) even+=i;
        }
        cout<<even;
        for(auto i:queries){
            if(a[i[1]]%2==0 and i[0]%2==0) even +=i[0];
            if(a[i[1]]%2==0 and i[0]%2!=0) even -=a[i[1]];
            if(a[i[1]]%2!=0 and i[0]%2!=0) even += a[i[1]]+ i[0];
            a[i[1]]+=i[0];
            ans.push_back(even);
        }
        return ans;
    }
};