class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left;i<=right;i++){
            int n = i;
            bool is_self = 1;
            string s = to_string(n);
            int len = s.length();
            for(int j=0;j<len;j++){
                is_self = 1;
                int w = s[j] - '0';
                if(s[j]=='0' or n%w!=0){
                    is_self = 0;
                    break;
                }
            }
            if(is_self) ans.push_back(n);
        }
        return ans;
    }
};