class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int count=0;
        sort(J.begin(),J.end());
        sort(S.begin(),S.end());
        for(int i=0;i<J.length();i++){
            count += ( upper_bound(S.begin(),S.end(),J[i]) - lower_bound(S.begin(),S.end(),J[i]) );
        }
        return count;
    }
};