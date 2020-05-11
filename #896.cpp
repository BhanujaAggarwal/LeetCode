class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        vector<int> b=A,c=A;
        sort(b.begin(),b.end());
        sort(c.begin(),c.end(),greater<int>());
        return (A==b or A==c);
    }
};